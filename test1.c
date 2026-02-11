#include <stdio.h>
#include <stdlib.h>

int suma(int a  , int b){
    return a + b;
}

int main(void){
    int a = 4 , b = 7;
    printf("%d",suma(a,b));
    return 0;
}