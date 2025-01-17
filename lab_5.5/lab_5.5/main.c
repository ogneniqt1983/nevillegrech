
#include <stdio.h>
#define SIZE 101

int main(int argc, const char * argv[]) {
  
    float ar[SIZE][SIZE][SIZE];
    for (int i=0; i<SIZE; i++) {
        for (int j=0; j<SIZE; j++) {
            for (int k=0; k<SIZE; k++) {
                ar[i][j][k]=i+6*j+7.2*k;
            }
        }
    }
    printf("(f:1,1,1 )= %.2f\n",ar[1][1][1]);
    printf("(f:5,5,5)=%.2f\n",ar[5][5][5]);
    printf("(f:50,50,50)=%.2f\n",ar[100][100][100]);
    
    return 0;
}
