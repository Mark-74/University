#include <stdio.h>

#define t_NERO   "\033[30m"
#define t_ROSSO  "\033[31m"
#define t_VERDE  "\033[32m"
#define t_GIALLO "\033[33m"

#define s_ROSSO  "\033[41m"
#define s_VERDE  "\033[42m"
#define s_GIALLO "\033[43m"

#define m_g      "\033[1m"

#define RESET    "\033[0m"
#define INVERTI  "\033[7m"

int main(){
    unsigned int voto = 0;

    printf("Inserisci il tuo voto: ");
    scanf("%u%*c", &voto);

    if (voto < 18){
        printf(t_ROSSO "%u" RESET "\n", voto);
    } else if (voto < 24){
        printf(t_GIALLO "%u" RESET "\n", voto);
    } else if (voto <= 30){
        printf(t_VERDE "%u", voto);

        if (voto == 30){
            printf(" " m_g "e lode?" RESET "\n");
        }
    } else {
        printf(s_ROSSO "VOTO NON VALIDO!" RESET "\n");
    }
}
