#include <stdio.h>
#include <math.h>

int main(){
    double capitale = 0, tasso = 0, anni = 0;

    printf("Inserisci il capitale: ");
    scanf("%lf%*c", &capitale);
    printf("Inserisci il tasso annuo in percentuale: ");
    scanf("%lf%%%*c", &tasso);
    printf("Inserisci il numero di anni: ");
    scanf("%lf%*c", &anni);

    double result = capitale * pow((1 + tasso/100), anni);
    if(result >= 2*capitale){
        printf("Il suo capitale è almeno raddoppiato: %lf\n", result);
    } else {
        printf("Il suo capitale attuale è: %lf\n", result);
    }
}
