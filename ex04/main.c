#include <stdio.h>

int main(){

int num = 0 ;

while (num <= 200) {
   if( num % 4 == 0) {
    printf("%d ", num);
   }
   num++;
}

    return 0;
}