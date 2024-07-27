#include <stdio.h>

int main(){

char sx;
float alt, medF, soma, maioralt, menoralt, media;
int i = 0, contF;

for ( i = 0 ; i <= 9; i++)
{
    printf("M para masculino, F para femenino:");
    scanf("%s", &sx);
    printf("Digite a altura: (Em metros)\n");
    scanf("%f", &alt);
    
    if (sx == 'F'){
        medF += alt;
        contF++;
    }
    if (alt > maioralt ){
        maioralt = alt;
    }
    if (alt < menoralt){
        menoralt = alt;
    }

    media += alt;
}

 printf("Maior %.2f e menor %.2f altura \n", maioralt, menoralt);
 printf("Media altura mulheres %.2f \n", medF/ contF);
 printf("Media do grupo \n", media/10 );

    return 0;
}