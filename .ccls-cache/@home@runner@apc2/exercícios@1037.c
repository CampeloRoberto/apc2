
#include <stdio.h>

int main()
{


    int beluga;

    printf("Digite um número: \n");
    int deu_certo = scanf("%i",&beluga);


    if (beluga >= 0 && beluga <= 25 ){

        printf("[0,25]");

    }else if(beluga > 25 &&  beluga <= 50){

         printf("[25,50]");

    }else if(beluga > 50 && beluga <= 75){

        printf("[50,75]");
    }else if(beluga > 75 && beluga <= 100){

        printf("[75,100]");

    }else {

        printf("Fora de intervalo");

    }


    return 0;
}
