#include <stdio.h>

int main(){
    char nome[] = "Marco Balducci";
    char corso[] = "Ingegneria e scienze informatiche";
    char matricola[] = "0001257004";
    char email[] = "marco.balducci11@studio.unibo.it";

    printf("****************************************\n* %-36.36s *\n* %-36.36s *\n* %-36.36s *\n* %-36.36s *\n****************************************\n", nome, corso, matricola, email);
}
