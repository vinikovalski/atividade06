#include <stdio.h>

int main(){
int num = 0, p, i;

while ( num != -999)
{
printf("Digite um numero: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            p++;
        }else if(num != -999){
            i++;
        }
}

printf("quantidade de numeros pares %d", p);
printf("quantidade de numeros impares %d", i);

    return 0; 
}