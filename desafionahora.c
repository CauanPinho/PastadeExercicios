/*b faça um algoritmo que receba como entrada que receba quatro notas
bimestrais de uma turma de 50 alunos, calcule a media de cada aluno e a
media anual da turma, para cada aluno se o mesmo foi aprovado ou reprovado,
sabendo que a media de aprovaç~´ao é */
#include <stdio.h>
int main() {
    float n1,n2,n3,n4,mda,mdt,aa,ar=0;
    int i=0;

    while (i<5) {
        printf("Diite sua nota do primeiro bimesetre");
        scanf("%f",&n1);
          printf("Diite sua nota do segundo bimesetre");
        scanf("%f",&n2);
          printf("Diite sua nota do terceiro bimesetre");
        scanf("%f",&n3);
          printf("Diite sua nota do quarto bimesetre");
        scanf("%f",&n4);
        mda=((n1+ n2+n3 +n4)/4);
        mdt=mdt+mda;
        i=i+1;
        if (mda>=6) {
            printf("Vc foi aprovado \n");
            aa=aa +1;

        }
        else{
            printf("vc foi reprovado");
            ar=ar+1;
        }
    }
printf("a media da turma é %f",mdt);
printf("o numero de aprovados é %f",aa);
printf("o numero de reprovados é %f",ar);
return 0;
}

