#include <stdio.h>
#include <stdlib.h>

int main(){
    // %[flag][ampiezza][.precisione][lunghezza]conversione
    // flag         = segno, altre robe
    // ampiezza     = numero minimo di caratteri stampati
    // precisione   = ".2" decimali per i reali
    // lunghezza    = "h, l, ll, L, z" lunghezza del tipo
    // conversione  = "d, u, x, f, ..." tipo da rappresentare

    float eta = 1.7f;
    printf("%+20.7f\n", eta);

    printf("%10.3s\n", "ciao");

    return 0;
}
