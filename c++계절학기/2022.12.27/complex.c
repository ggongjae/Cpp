////c언어로 객체 만들기
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct complex{
//    double re, im;
//    void(*f)(struct complex);
//} Complex;
//
//void print_c(Complex a){
//    printf("%.2lf + %.2lf i\n", a.re, a.im);
//}
//
//int main(){
//    Complex a = {1.1,2.2};
//    a.f = print_c;
//    a.f(a);
////    Complex *cp;
////    cp = (Complex *)malloc(size(Complex));
////    cp -> printfun = print_c;
////    cp -> re = 1.1;
////    cp -> im = 2.2;
////    cp -> printfun(cp);
//
//}
//
