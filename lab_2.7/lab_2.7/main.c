#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,tot=1;
    printf("Enter the factorial:\n");
    scanf("%d",&num);
    int counter=num;
    for (int i=1; num>i; num--) {
        tot=tot*num;
    }
    printf("\n ");
    printf("factorial of %d is %d\n",counter,tot);
    return 0;
}
