#include <stdio.h>

int main(){

    int res1    = 7 + 3 * 2;
    int res2    = (7 + 3) * 2;
    float res3  = (float)(7) / 2 * 2;
    float res4  = 7 / 2.0 * 2;
    int res5    = 10 - 4 - 3;

    printf("%d %d %f %f %d\n", res1, res2, res3, res4, res5);

    int a = 5, b = 0;
    
    b = a++ * 2;
    printf("%d\n", b);

    // a al momento vale 6
    b = ++a * 2;
    printf("%d\n", b);
}
