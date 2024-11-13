
#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    int pin=0000;
    int validate;
    for (int i=0; i<5; i++) {
        printf("Enter the PIN:\n");
        scanf("%d",&validate);
        if (pin == validate) {
            printf("Correct!\n");break;}
        else
            printf("Incorrect. %d enters remaining",4-i);
    }
    printf("Well done!\n");
    return 0;
}
