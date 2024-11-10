
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A3=1000;
    int a3,a4,a5;
    int A4=1000;
    int A5=1000;
    printf("Enter amount for A3\n");
    scanf("%d",&a3);
    printf("Enter amount for A4\n");
    scanf("%d",&a4);
    printf("Enter amount for A5\n");
    scanf("%d",&a5);
    printf("The balance of A3:%d A4:%d A5:%d\n",A3-a3,A4-a4,A5-a5);
    return 0;
}
