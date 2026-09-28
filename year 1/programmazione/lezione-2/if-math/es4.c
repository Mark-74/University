#include <stdio.h>
#include <math.h>

int main(){
    double cateto1 = -1, cateto2 = -1;

    printf("Inserisci il primo cateto: ");
    scanf("%lf%*c", &cateto1);
    printf("Inserisci il secondo cateto: ");
    scanf("%lf%*c", &cateto2);

    if(cateto1 <= 0 || cateto2 <= 0){
        printf("Un cateto non può essere non positivo.\n");
        return 1;
    }

    double ipotenusa = hypot(cateto1, cateto2);
    double perimetro = cateto1 + cateto2 + ipotenusa;
    double area = cateto1 * cateto2;
    double acuto1 = acos(cateto1 / ipotenusa)*180/M_PI, acuto2 = acos(cateto2 / ipotenusa)*180/M_PI;

    printf("L'ipotenusa misura: %.4lf\nIl perimetro misura %.4lf\nL'area misura %.4lf\nGli angoli acuti misurano %.4lf e %.4lf\n", ipotenusa, perimetro, area, acuto1, acuto2);
    
}
