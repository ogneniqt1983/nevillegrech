
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,sum=1;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for (int i=n; i>1; i--) {
        sum=sum*i;
    }
    
    
    
    printf("Factorial of %d is %d",n,sum);
    return 0;
}
