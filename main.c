#include <stdio.h>


        int main(){

    int a;

printf("Podaj liczbę mniejszą niż 20, a wiekszą niż 0: \n");
scanf("%d", &a);

if (!(a%2)) --a;
for(; a>0; a-=2)
{
    if ((!a%2)) continue;
        if (!(a%3)) continue;
        if (!(a%5)) continue;
        if (!(a%7)) continue;

printf("%d ", a);}




    return 0;


}