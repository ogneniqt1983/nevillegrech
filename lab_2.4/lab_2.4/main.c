#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(int argc, const char * argv[]) {
    char name[11][11];
    char surname[11][11];
    int age[11],counter=0;
    float salary[11];
    float total=0;

    for (int i=0; i<SIZE; i++) {
        counter++;
        printf("Enter your name:\n");
        scanf("%s",name[i]);
        printf("Enter your surname:\n");
        scanf("%s",surname[i]);
        printf("Enter your age:\n");
        scanf("%d",&age[i]);
        printf("Enter your salary:\n");
        scanf("%f",&salary[i]);
        if (i==4) {
            printf("%d %-10s %-10s %-10s %-10s %-10s\n",i,"Name","Surname","Age","Salary","Annual");
            printf("\n");
            for (int x=0; x<5; x++) {
                printf("%d %-10.10s %-10.10s %-10d %-10.2f %-10.2f\n",x,name[x],surname[x],age[x],salary[x],salary[x]*12);}}}
    
    printf("%s %-10s %-10s %-10s %-10s %-10s\n","Num","Name","Surname","Age","Salary","Annual");
    printf("\n");
    for (int x=5; x<10; x++) {
        printf("%d %-10.10s %-10.10s %-10d %-10.2f %-10.2f\n",x,name[x],surname[x],age[x],salary[x],salary[x]*12);}
    
    for (int i=0; i<10; i++) {
        total = total + (salary[i]*12);}
    printf("Total wages:%.2f\n",total);
        return 0;}

