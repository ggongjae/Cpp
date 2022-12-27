#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142
int main(){
    double x;
    printf("+--------------------+--------------------+\n");
    for(x=0.0; x<2*PI; x+=0.3){
        int position;
        double y;
        y = sin(x);
        position = (int)(20.0 * y + 21.5);
        for(; position>0; position--) {
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
    }
}