#include<stdio.h>

#include<stdlib.h>

#include<string.h>

typedef struct{
    char nome[16];
    char sobrenome[16];
    int nusp;
    float p1;
    float p2;
    float trabalho;
    float media;
}Student;

typedef struct{
    int nalunos;
    Student aluno[100];
}tp_Sala;

float **Alocar_matriz_real (int m, int n)
{
  float **v;
  int   i;
  
  if (m < 1 || n < 1) {
     printf ("** Erro: Parametro invalido **\n");
     return (NULL);
  }

  v = (float **) calloc (m, sizeof(float *));
  if (v == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     return (NULL);
  }

  for ( i = 0; i < m; i++ ) {
      v[i] = (float*) calloc (n, sizeof(float));
      if (v[i] == NULL) {
         printf ("** Erro: Memoria Insuficiente **");
         return (NULL);
		}
	}

  return (v);

}


void gerar_estatistica(int linha, tp_Sala *turmas){
    float **mat, somap1,somap2,somatrab,somamed,naprovados;  /* matriz a ser alocada */
    int coluna=5;   /* numero de linhas e colunas da matriz */
    int i, j;
    
	mat = Alocar_matriz_real (linha, coluna);
    
	for ( i = 0; i < linha; i++){
        somap1=0;
        somap2=0;
        somatrab=0;
        somamed=0;
        naprovados=0;
        
		for(j=0;j<turmas[i].nalunos;j++){
            somap1=somap1+turmas[i].aluno[j].p1;

            somap2=somap2+turmas[i].aluno[j].p2;

            somatrab=somatrab+turmas[i].aluno[j].trabalho;

            somamed=somamed+turmas[i].aluno[j].media;

            if(turmas[i].aluno[j].media >=5){naprovados++;}

        }

        mat[i][0]=(somap1/turmas[i].nalunos);
        mat[i][1]=(somap2/turmas[i].nalunos);
        mat[i][2]=(somatrab/turmas[i].nalunos);
        mat[i][3]=(somamed/turmas[i].nalunos);
        mat[i][4]=(naprovados*100/turmas[i].nalunos);
    }

    printf("\n");

    for ( i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
        printf("%0.2f ",mat[i][j]);
    }
    printf("\n");
    }
    free(mat);
}


tp_Sala* allocate_StudentArray(int number_salas) {
    return malloc(sizeof(tp_Sala)*number_salas);
}

void read_student(tp_Sala *s,int nalunos,int turma){
    for(int i=0;i<nalunos;i++){
        printf("Insira o Nome e Sobrenome do aluno %d: ",i+1);
        scanf("%s %s",s[turma].aluno[i].nome,s[turma].aluno[i].sobrenome);
        printf("Insira o Numero Usp do aluno %d: ",i+1);
        scanf("%d",&s[turma].aluno[i].nusp);
        printf("Insira as notas da P1, P2 e Trabalho do aluno %d: ",i+1);
        scanf("%f %f %f",&s[turma].aluno[i].p1,&s[turma].aluno[i].p2,&s[turma].aluno[i].trabalho);
        s[turma].aluno[i].media=((s[turma].aluno[i].p1+s[turma].aluno[i].p2+s[turma].aluno[i].trabalho)/3);
    }
}

void print(Student list[], int pos){
        printf("\nNome: %s %s\n",list[pos].nome,list[pos].sobrenome);
        printf("P1: %0.1f\n",list[pos].p1);
        printf("P2: %0.1f\n",list[pos].p2);
        printf("Trabalho: %0.1f\n",list[pos].trabalho);
        printf("Media Final: %0.2f\n",list[pos].media);
}

int search_StudentByName(Student list[], int pos, int Nalunos, const char* name){
    char nomet[16];

    strcpy(nomet,list[pos].nome);

    if(pos>Nalunos-1){printf("\nAluno nao encontrado\n"); return 0;}

    if(strcmp(nomet,name)==0){
        print(list,pos);
    }

    else{return search_StudentByName(list,pos+1,Nalunos,name);}

}







void desejafazer(){

    int n=0, contaturma = 0, contalunos = 0,i,j;
    tp_Sala *turma;

    while(n!=5){
        printf("\nO que deseja fazer?\n");
        printf("1- Criar turma;\n2- Procurar aluno;\n3- Gerar estatisticas das turmas;\n4- Gravar informacoes de uma turma;\n5- Encerrar sistema.\n");
        scanf("%d",&n);
        if(n==5){break;}
        if(n==1){
            if(contaturma==0){
                turma = allocate_StudentArray(1);
                printf("Insira o numero de alunos: ");
                scanf("%d",&turma[contaturma].nalunos);
                read_student(turma,turma[contaturma].nalunos,contaturma);
                contalunos = turma[contaturma].nalunos + contalunos;
            }
            else{
                turma = realloc(turma,sizeof(tp_Sala)*(contaturma+1));
                printf("Insira o numero de alunos: ");
                scanf("%d",&turma[contaturma].nalunos);
                read_student(turma,turma[contaturma].nalunos,contaturma);
                contalunos = turma[contaturma].nalunos + contalunos;
            }

            contaturma++;

        }

        if(n==2){
            Student vetortodos[contalunos];
            int k=0;

            for(i=0;i<contaturma;i++){
                for(j=0;j<turma[contaturma-1].nalunos;j++){
                    strcpy(vetortodos[k].nome,turma[i].aluno[j].nome);
                    strcpy(vetortodos[k].sobrenome,turma[i].aluno[j].sobrenome);
                    vetortodos[k].p1 = turma[i].aluno[j].p1;
                    vetortodos[k].p2 = turma[i].aluno[j].p2;
                    vetortodos[k].trabalho = turma[i].aluno[j].trabalho;
                    vetortodos[k].media = turma[i].aluno[j].media;
                    k++;
                }
            }

            char name[16];

            printf("Insira o nome do aluno: ");
            scanf("%s",name);
            search_StudentByName(vetortodos,0,contalunos,name);
        }

        if(n==3){
            gerar_estatistica(contaturma, turma);
        }

    }

    printf("Encerrando sistema...");
}


int main(){
    float **Alocar_matriz_real (int m, int n);
    void gerar_estatistica(int linha, tp_Sala *turmas);
    tp_Sala* allocate_StudentArray(int number_salas);
    int search_StudentByName(Student list[], int pos, int Nalunos, const char* name);
    void read_student(tp_Sala *s,int nalunos,int turma);
    void desejafazer();
    
    desejafazer();
    return 0;
}
