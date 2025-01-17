#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    FILE *fp;
    fp = fopen("numbers.txt", "w");
    int qty,counter=0;
    printf("How many integers would you like to enter?\n");
    scanf("%d",&qty);
    int num[qty];
    if (fp == NULL) {
        printf("Error opening the file");
        return 1;
    }
    while ( counter < qty) {
        printf("Enter a number:\n");
        scanf("%d",&num[counter]);
        if (num[counter] < 1 || num[counter]>50) {
            printf("Enter integers between 1 and 50.\n");}
        else{
            fprintf(fp,"%d ",num[counter]);
            counter++;
        }
    
    }
    fclose(fp);
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file");
        return 1;
    }
    int value;
    while ((fscanf(fp, "%d",&value))!= EOF) {

        printf("%d ",value);
    }
    
    
    fclose(fp);
    return 0;
}

