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
    printf(t_ROSSO "ROSSO " t_GIALLO "GIALLO " t_VERDE "VERDE" RESET "\n");
    printf(t_NERO s_ROSSO "ROSSO" RESET " " t_NERO s_GIALLO "GIALLO" RESET " " t_NERO s_VERDE "VERDE" RESET "\n");
    printf(t_NERO m_g s_ROSSO "ROSSO" RESET " " t_NERO m_g s_GIALLO "GIALLO" RESET " " t_NERO m_g s_VERDE "VERDE" RESET "\n");
}
