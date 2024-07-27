#include <stdio.h>
int main(){

int i, numd;
printf("Digite um numero: ");
scanf("%d", &numd);

i = 0;
do{
    if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
}while (i <= numd);

printf("\n");

    return 0;
}