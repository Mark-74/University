#include <stdio.h>

int main(){
    int anno = 0;

    printf("Inserisci l'anno: ");
    scanf("%d%*c", &anno);

    printf((anno % 4 == 0 && anno % 100 != 0) ? "L'anno è bisestile.\n" : "L'anno non è bisestile.\n");

    // oppure
    // if(anno % 4 == 0){
    //     if(anno % 100 != 0){
    //         printf("L'anno è bisestile.\n");
    //         return 0;
    //     }
    // }

    // printf("L'anno non è bisestile.\n");
}
