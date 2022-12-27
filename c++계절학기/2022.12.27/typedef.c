#include <stdlib.h>
#include <stdio.h>

typedef int DBLFUN(int, int);
int main(){
    DBLFUN *ff();
    DBLFUN *ff;

    fun = ff();
    printf("%d\n",fun(2,3));
}
int plus (int x, int y){
    return x + y;
}
DBLFUN **ff() {
    return &plus;
}
