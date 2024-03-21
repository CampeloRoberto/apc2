#include <stdio.h>

void trocar_valor(int *a,int *b){
        int k;
        k = *a;
        *a=*b;
        *b=k;
    }

int main()
{
    int n1,n2;

    printf("Digite o primeiro numero: \n");
        scanf ("%d",&n1);

    printf("Digite o segundo numero: \n");
        scanf ("%d",&n2);

    trocar_valor(&n1,&n2);

    printf(" Primeiro numero agora é = %d\n",n1);
    printf(" Segundo numero agora é = %d\n",n2);

    return 0;
}
