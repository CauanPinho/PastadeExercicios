/*b fa�a um algoritmo que receba como entrada que receba quatro notas
bimestrais de uma turma de 50 alunos, calcule a media de cada aluno e a
media anual da turma, para cada aluno se o mesmo foi aprovado ou reprovado,
sabendo que a media de aprova�~�ao � */
#include <stdio.h>
int main() {
    float n1,n2,n3,n4,mda,mdt,aa,ar=0;
    int i=0;

    while (i<50) {
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
            printf("vc foi reprovado \n ");
            ar=ar+1;
        }
    }
printf("a media da turma � %f\n",mdt/50);
printf("o numero de aprovados � %f\n",aa);
printf("o numero de reprovados � %f\n",ar);
return 0;
}

