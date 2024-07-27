#include <stdio.h>

int main(){

int i;
float  n1, n2, n3;
char nome [30];


for( i = 0; i <= 20; i++)
{

printf("Informe o nome do aluno: ");
scanf("%s", nome);

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
}
printf("aluno %s\n ", nome);
printf("primeira nota %f\n ", n1);
printf("segunda nota %f\n ", n2); 
printf("tereira nota %f\n", n3); 
printf("media: %f\n", (n1+n2+n3)/3);

    return 0;
}