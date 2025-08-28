int main() {
    float n1,n2,n3,n4,mda;
     printf("Diite sua nota do primeiro bimesetre");
        scanf("%f",&n1);
          printf("Diite sua nota do segundo bimesetre");
        scanf("%f",&n2);
          printf("Diite sua nota do terceiro bimesetre");
        scanf("%f",&n3);
          printf("Diite sua nota do quarto bimesetre");
        scanf("%f",&n4);
        mda=((n1+ n2+n3 +n4)/4);
        printf("A media aritmetica do aluno é %d",mda);

         if (mda>=6) {
                printf("Vc foi aprovado \n");


            }
            else{
                printf("vc foi reprovado \n ");

            }


