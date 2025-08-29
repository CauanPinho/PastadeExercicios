#include <stdio.h>

int main(){
    float matri,n1,n2,n3,mdp;
    printf("digite sua matricula");
    scanf("%d",&matri);
    do{

    while(matri!=0){
        printf("DIgite sua nota");
        scanf("%f",&n1);
         printf("DIgite sua nota");
        scanf("%f",&n2);
         printf("DIgite sua nota");
        scanf("%f",&n3);
         printf("digite sua matricula");
          scanf("%d",&matri);
         if (n1>n2)&&(n1>n3){
            mdp=((4*n1)*(3*n2)*(3*n3))/10;
            printf("sua media é %f",mdp);
            }
        if (n2>n1)&&(n2>n3){
            mdp=((3*n1)*(4*n2)*(3*n3))/10;
            printf("sua media é %f",mdp);
        }
        if (n2>n1)&&(n2>n3){
            mdp=((3*n1)*(3*n2)*(4*n3))/10;
            printf("sua media é %f",mdp);
        }




    }
return 0;
}
