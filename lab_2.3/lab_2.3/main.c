#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char word1[30];
    char word2[30];
    char word3[30];
    int num1,num2,num3;
    printf("Enter 3 words.\n");
    scanf("%s%s%s",word1,word2,word3);
    
    
    num1 = (int) strlen(word1);
    num2 = (int) strlen(word2);
    num3 = (int) strlen(word3);
    for (int x=0; (num1+1)>x; num1--) {
        printf("%c",word1[num1]);}
    printf("\n");
    for (int y=0; (num2+1)>y; num2--) {
        printf("%c",word2[num2]);}
    printf("\n");
    for (int z=0; (num3+1)>z; num3--) {
        printf("%c",word3[num3]);}
    printf("\n");
        
    
    
    
    return 0;
}
