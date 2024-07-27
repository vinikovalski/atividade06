#include <stdio.h>

int main(){
int num = 0, cont =0;
float media;

while (num >= 0){
    printf("Digite um numero:");
    scanf("%d", &num);

   if (num >= 0){
    media += num;
    cont++;
   }
}

printf("Media:%.2f", media/cont);


    return 0;
}