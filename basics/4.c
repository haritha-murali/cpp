#include <stdio.h>

double f(){
    printf("calling f()\n");
    return 3.1345559980;
}

int main(){
    printf("%.3f",f());
    printf("hello");
    return 0;
}