#include <stdio.h>

int main(){
    int numero1 = 0, numero2 = 0, numero3 = 0;

    printf("Inserisci il primo numero: ");
    scanf("%d%*c", &numero1);
    printf("Inserisci il primo numero: ");
    scanf("%d%*c", &numero2);
    printf("Inserisci il primo numero: ");
    scanf("%d%*c", &numero3);

    int max = 0;

    if(numero1 >= numero2){
        if(numero2 >= numero3){
            max = numero1;
        } else if(numero1 >= numero3){
            max = numero1;
        } else {
            max = numero3;
        }
    } else if(numero2 >= numero3){
        max = numero2;
    } else {
        max = numero3;
    }

    printf("Il numero massimo è %d\n", max);
}
