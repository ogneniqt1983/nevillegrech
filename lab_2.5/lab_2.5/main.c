#include <stdio.h>
#define WEEK 7
#define SIZE 3
int main(int argc, const char * argv[]) {

    int total=0;
    int days[SIZE];
    for (int i=0; i<SIZE; i++) {
        printf("Entry number: %d\n",i);
        scanf("%d",&days[i]);}
    
    for (int i=0; i<SIZE; i++) {
        total+=days[i];}
    printf("total days:%d\n",total);
    printf("%d days are %d weeks and %d days.\n",total,total/WEEK,total%WEEK);
    
    
    
    
    
  
    
    return 0;
}
