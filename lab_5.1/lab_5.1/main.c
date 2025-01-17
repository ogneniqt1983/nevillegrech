
#include <stdio.h>
#include <stdlib.h>

void copy_ar(int *,int *,int );
int main(int argc, const char * argv[]) {
    printf("Enter the size of the array you want:\n");
    int size,n,i=0;
    scanf("%d",&n);
    int ar[n];
    size = (int) sizeof(ar);
    int the_copy[size];
    printf("Enter the integers: ");
    while ((scanf("%d",&ar[i]))!=0 && i+1<n) {
        printf("Again: ");
        i++;
    }
    copy_ar(ar, the_copy,size);
    printf("Original array:\n");
    for (int i=0; i<n; i++) {
        printf("%d, ",ar[i]);
    }
    printf("\n");
    printf("The copy:\n");
    for (int i=0; i<n; i++) {
        printf("%d, ",the_copy[i]);
    }
    
    
    return 0;}
void copy_ar(int *ar, int *the_copy,int size)
{
    for (int i=0; i<size; i++) {
        the_copy[i] = ar[i];
    }
}
