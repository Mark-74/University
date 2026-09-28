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

void ok(char testo[]){
    printf(t_VERDE "[OK]" RESET " %s\n", testo);
}

void warning(char testo[]){
    printf(t_GIALLO "[WARNING]" RESET " %s\n", testo);
}

void error(char testo[]){
    printf(t_ROSSO m_g "[ERROR]" RESET " %s\n", testo);
}

int main(){
    ok("Il programma è partito!");
    warning("Il programma ha un avvertimento!");
    error("Il programma è in errore!");
}
