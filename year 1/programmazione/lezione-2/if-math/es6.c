#include <stdio.h>
#include <math.h>

int main(){
    double x = 0, y = 0;

    printf("Coordinata x: ");
    scanf("%lf%*c", &x);

    printf("Coordinata y: ");
    scanf("%lf%*c", &y);

    double distance = sqrt(x*x + y*y);
    char quadrante = 0;
    if(x > 0){
        if(y > 0){
            quadrante = 1;
        } else {
            quadrante = 4;
        }
    } else {
        if(y > 0){
            quadrante = 2;
        } else {
            quadrante = 3;
        }
    }

    printf("La distance dall'origine è %.4lf ed il punto si trova nel quadrante n°%hhu.\n", distance, quadrante);

}