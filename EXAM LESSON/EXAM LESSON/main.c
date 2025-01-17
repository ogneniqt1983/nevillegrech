#include<stdio.h>
#define SQR(x)(x*x)
int main(int argc, char *argv[])
{
    int a, b=3;
    a = SQR(b+2);
    printf("%d\n", a);
        
    return 0;
}
