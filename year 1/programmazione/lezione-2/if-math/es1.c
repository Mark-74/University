#include <stdio.h>

int main(){
    int numero = 0;
    printf("Inserisci un numero: ");
    scanf("%d%*c", &numero);

    if(numero < 0){
        printf("Il numero inserito è negativo.\n");
    } else if(numero == 0){
        printf("Il numero inserito è nullo.\n");
    } else {
        printf("Il numero inserito è positivo.\n");
        printf(numero % 2 == 0 ? "Il numero è pari.\n" : "Il numero è dispari\n");
    }
}
