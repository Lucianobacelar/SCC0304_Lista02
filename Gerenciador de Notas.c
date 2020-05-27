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


int main(){
    desejafazer();
    return 0;
}

void desejafazer(){
    int n=0, naluno1=0,naluno2=0,naluno3=0,naluno4=0,naluno5=0,naluno6=0,naluno7=0,naluno8=0,naluno9=0,naluno10=0, contaturma = 0, contaluno = 0, pos=0, lugar=0; 
    Student *turma1,*turma2,*turma3,*turma4,*turma5,*turma6,*turma7,*turma8,*turma9,*turma10; 
    while(n!=5){
        printf("\nO que deseja fazer?\n");
        printf("1- Criar turma;\n2- Procurar aluno;\n3- Gerar estatisticas das turmas;\n4- Gravar informacoes de uma turma;\n5- Encerrar sistema.\n");
        printf("Insira o numero: ");
        scanf("%d",&n);
        if(n==5){break;}
        if(n==1){
            if(contaturma==0){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno1);
                turma1 = allocate_StudentArray(naluno1);
                read_student(turma1,naluno1);
                contaluno=contaluno+naluno1;
            }
            if(contaturma==1){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno2);
                turma2 = allocate_StudentArray(naluno2);
                read_student(turma2,naluno2);
                contaluno=contaluno+naluno2;
            }
            if(contaturma==2){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno3);
                turma3 = allocate_StudentArray(naluno3);
                read_student(turma3,naluno3);
                contaluno=contaluno+naluno3;
            }
            if(contaturma==3){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno4);
                turma4 = allocate_StudentArray(naluno4);
                read_student(turma4,naluno4);
                contaluno=contaluno+naluno4;
            }
            if(contaturma==4){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno5);
                turma5 = allocate_StudentArray(naluno5);
                read_student(turma5,naluno5);
                contaluno=contaluno+naluno5;
            }
            if(contaturma==5){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno6);
                turma6 = allocate_StudentArray(naluno6);
                read_student(turma6,naluno6);
                contaluno=contaluno+naluno6;
            }
            if(contaturma==6){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno7);
                turma7 = allocate_StudentArray(naluno7);
                read_student(turma7,naluno7);
                contaluno=contaluno+naluno7;
            }
            if(contaturma==7){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno8);
                turma8 = allocate_StudentArray(naluno8);
                read_student(turma8,naluno8);
                contaluno=contaluno+naluno8;
            }
            if(contaturma==8){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno9);
                turma9 = allocate_StudentArray(naluno9);
                read_student(turma9,naluno9);
                contaluno=contaluno+naluno9;
            }
            if(contaturma==9){
                printf("Insira o numero de alunos: ");
                scanf("%d",&naluno10);
                turma10 = allocate_StudentArray(naluno10);
                read_student(turma10,naluno10);
                contaluno=contaluno+naluno10;
            }
            contaturma++;
        }
        if(n==2){
            char name[15];
            int k;
            printf("Insira o nome do aluno: ");
            scanf("%s",name);
            k = search_StudentByName(lugar,name,naluno1,naluno2,naluno3,naluno4,naluno5,naluno6,naluno7,naluno8,naluno9,naluno10, turma1, turma2,turma3,turma4,turma5,turma6,turma7,turma8,turma9,turma10);
            if(k<naluno1 && k>=0){print_student(turma1,k);}
            if(k<naluno2+naluno1 && k>=naluno1){print_student(turma2,k-naluno1);}
            if(k<naluno3+naluno2+naluno1 && k>=naluno2+naluno1){print_student(turma3,k-naluno1-naluno2);}
            if(k<naluno4+naluno3+naluno2+naluno1 && k>=naluno3+naluno2+naluno1){print_student(turma4,k-naluno1-naluno2-naluno3);}
            if(k<naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno4+naluno3+naluno2+naluno1){print_student(turma5,k-naluno1-naluno2-naluno3-naluno4);}
            if(k<naluno6+naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno5+naluno4+naluno3+naluno2+naluno1){print_student(turma6,k-naluno1-naluno2-naluno3-naluno4-naluno5);}
            if(k<naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno6+naluno5+naluno4+naluno3+naluno2+naluno1){print_student(turma7,k-naluno1-naluno2-naluno3-naluno4-naluno5-naluno6);}
            if(k<naluno8+naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1){print_student(turma8,k-naluno1-naluno2-naluno3-naluno4-naluno5-naluno6-naluno7);}
            if(k<naluno9+naluno8+naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno8+naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1){print_student(turma9,k-naluno1-naluno2-naluno3-naluno4-naluno5-naluno6-naluno7-naluno8);}
            if(k<naluno10+naluno9+naluno8+naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1 && k>=naluno9+naluno8+naluno7+naluno6+naluno5+naluno4+naluno3+naluno2+naluno1){print_student(turma10,k-naluno1-naluno2-naluno3-naluno4-naluno5-naluno6-naluno7-naluno8-naluno9);}
            if(k==-1){printf("\nAluno nao encontrado\n");}
        }
        if(n==3){
            gerar_estatistica(contaturma,naluno1,naluno2,naluno3,naluno4,naluno5,naluno6,naluno7,naluno8,naluno9,naluno10, turma1, turma2,turma3,turma4,turma5,turma6,turma7,turma8,turma9,turma10);


        }
    }
    printf("Encerrando sistema...");
}


int allocate_StudentArray(int number_of_students) {
    return malloc(sizeof(Student)*number_of_students);
}

void read_student(Student *s,int nalunos){
    for(int i=0;i<nalunos;i++){
        printf("Insira o Nome e Sobrenome do aluno %d: ",i+1);
        scanf("%s %s",s[i].nome,s[i].sobrenome);
        printf("Insira o Numero Usp do aluno %d: ",i+1);
        scanf("%d",&s[i].nusp);
        printf("Insira as notas da P1, P2 e Trabalho do aluno %d: ",i+1);
        scanf("%f %f %f",&s[i].p1,&s[i].p2,&s[i].trabalho);
        s[i].media=((s[i].p1+s[i].p2+s[i].trabalho)/3);
    }

}

int search_StudentByName(int pos,const char* name,int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10, Student* list1, Student* list2, Student* list3, Student* list4, Student* list5, Student* list6, Student* list7, Student* list8, Student* list9, Student* list10){
    int p;
    
    if(pos<n1){
        if(strcmp(list1[pos].nome,name)==0){return pos;}
    }
    if(pos<n2+n1 && pos>=n1){
        p=pos-n1;
        if(strcmp(list2[p].nome,name)==0){return pos;}
    }
    if(pos<n3+n2+n1 && pos>=n2+n1){
        p=pos-n1-n2;
        if(strcmp(list3[p].nome,name)==0){return pos;}
    }
    if(pos<n4+n3+n2+n1 && pos>=n3+n2+n1){
        p=pos-n1-n2-n3;
        if(strcmp(list4[p].nome,name)==0){return pos;}
    }if(pos<n5+n4+n3+n2+n1 && pos>=n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4;
        if(strcmp(list5[p].nome,name)==0){return pos;}
    }if(pos<n6+n5+n4+n3+n2+n1 && pos>=n5+n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4-n5;
        if(strcmp(list6[p].nome,name)==0){return pos;}
    }if(pos<n7+n6+n5+n4+n3+n2+n1 && pos>=n6+n5+n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4-n5-n6;
        if(strcmp(list7[p].nome,name)==0){return pos;}
    }if(pos<n8+n7+n6+n5+n4+n3+n2+n1 && pos>=n7+n6+n5+n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4-n5-n6-n7;
        if(strcmp(list8[p].nome,name)==0){return pos;}
    }if(pos<n9+n8+n7+n6+n5+n4+n3+n2+n1 && pos>=n8+n7+n6+n5+n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4-n5-n6-n7-n8;
        if(strcmp(list9[p].nome,name)==0){return pos;}
    }
    if(pos<n10+n9+n8+n7+n6+n5+n4+n3+n2+n1 && pos>=n9+n8+n7+n6+n5+n4+n3+n2+n1){
        p=pos-n1-n2-n3-n4-n5-n6-n7-n8-n9;
        if(strcmp(list10[p].nome,name)==0){return pos;}
    }
    if(pos>n10+n9+n8+n7+n6+n5+n4+n3+n2+n1){return -1;}
    pos++; search_StudentByName(pos,name,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,list1,list2,list3,list4,list5,list6,list7,list8,list9,list10);
}

void print_student(Student *s, int n){
        printf("\nNome: %s %s\n",s[n].nome,s[n].sobrenome);
        printf("P1: %0.1f\n",s[n].p1);
        printf("P2: %0.1f\n",s[n].p2);
        printf("Trabalho: %0.1f\n",s[n].trabalho);
        printf("Media Final: %0.2f\n",s[n].media);
}

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

void gerar_estatistica(int linha,int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10, Student* list1, Student* list2, Student* list3, Student* list4, Student* list5, Student* list6, Student* list7, Student* list8, Student* list9, Student* list10){
    float **mat;  /* matriz a ser alocada */
    int coluna=5;   /* numero de linhas e colunas da matriz */
    int i, j;

    mat = Alocar_matriz_real (linha, coluna);
    for ( i = 0; i < linha; i++){
        if(i==0){

            mat[i][0]=medp1(list1,n1);
            //printf("%f\n",mat[i][0]);
            mat[i][1]=medp2(list1,n1);
            mat[i][2]=medtra(list1,n1);
            mat[i][3]=medfin(list1,n1);
            mat[i][4]=aprovados(list1,n1);
        }
    }
    for ( i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
        printf("%0.2f ",mat[i][j]);
    }
    printf("%\n");
    }
    
}

int medp1(Student *list,int n){
    int i;
    float soma,k;
    for ( i = 0; i < n; i++)
    {
        soma=soma+list[i].p1;
    }
    k=soma/n;
//    printf("%f",k);
    return k;
    
}

int medp2(Student *list,int n){
    int i;
    float soma;
    for ( i = 0; i < n; i++)
    {
        soma=soma+list[i].p2;
    }
    return (soma/n);
}

int medtra(Student *list,int n){
    int i;
    float soma;
    for ( i = 0; i < n; i++)
    {
        soma=soma+list[i].trabalho;
    }
    return (soma/n);
    
}

int medfin(Student *list,int n){
    int i;
    float soma;
    for ( i = 0; i < n; i++)
    {
        soma=soma+list[i].media;
    }
    return (soma/n);
}

int aprovados(Student *list,int n){
    int i;
    float contador;
    for ( i = 0; i < n; i++)
    {
        if(list[i].media>=5){contador++;}
    }
    return (100*(contador/n));
    
}
