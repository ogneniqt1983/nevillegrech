#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num=0;
    int sumi,sumx;
    for (int i=1; i<11; i++) {
        printf("\n");
        for (int x=1; x<11; x++) {
            sumi=x*i;
            printf("%-5d",sumi);
        }
       
    }

    
    printf("Hello, World!\n");
    return 0;
}
