#include <stdio.h>

int main(){

int i = 0, cont = 0;
do {
    printf("digite um numero:");
    scanf("%d", &i);

    if (i == 10){
        cont ++;
    }
} while(i != 0);

printf("O numero 10 apareceu %d vezes.", cont);

    return 0;
}