#include <stdio.h>

int main(){
    int num = 0;
    printf("Inserisci il numero da 3 cifre: ");
    scanf("%d%*c", &num);

    char sign = 0;
    if (num < 0){
        sign = 1;
        num *= -1;
    }

    if (num / 1000 > 0){
        puts("Numero troppo grande!");
        return 1;
    }

    int cifra1 = (num/100);
    int cifra2 = (num/10)%10;
    int cifra3 = num%10;
    
    printf("Cifre, una per riga:\n%c\n%d\n%d\n%d\n", (sign) ? '-' : '+', cifra1, cifra2, cifra3);
    printf("Somma: %d\n", cifra1 + cifra2 + cifra3);
    printf("Cifre al contrario: %c%d%d%d\n", (sign) ? '-' : '+', cifra3, cifra2, cifra1);
}