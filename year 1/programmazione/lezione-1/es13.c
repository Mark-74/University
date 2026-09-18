#include <stdio.h>

int main(){

    int val = 0;
    printf("Inserisci l'importo in centesimi: ");
    scanf("%d%*c", &val);

    int euro2   = (val/100) / 2;
    int euro1   = (val/100) % 2;
    int cents   = val%100;
    int cent50  = cents / 50;
    int cent20  = (cents - cent50*50) / 20;
    int cent10  = (cents - cent50*50-cent20*20) / 10;
    int cent5   = cents%10 / 5;
    int cent2   = (cents%10 - cent5*5) / 2;
    int cent1   = (cents%10 - cent5*5-cent2*2);

    printf("Monete da 2 euro:\t %d\n", euro2);
    printf("Monete da 1 euro:\t %d\n", euro1);
    printf("Monete da 50 cent:\t %d\n", cent50);
    printf("Monete da 20 cent:\t %d\n", cent20);
    printf("Monete da 10 cent:\t %d\n", cent10);
    printf("Monete da 5 cent:\t %d\n", cent5);
    printf("Monete da 2 cent:\t %d\n", cent2);
    printf("Monete da 1 cent:\t %d\n", cent1);

}