#include <stdio.h>
#define TRY 10
#define EUR 0.93
int main(int argc, const char * argv[]) {
    float dollar;
    for (int i=0;i<TRY; i++) {
        printf("Enter the amount of $ you want to conver to €:\n");
        scanf("%f",&dollar);
        printf("$%.2f = €%.2f\n",dollar,dollar*EUR);
    }
    printf("He\n");
    return 0;
}
