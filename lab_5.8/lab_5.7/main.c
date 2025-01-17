#include<stdio.h>
#include <string.h>
#define SIZE 3
struct employee{
    char name[20];
    char surname[20];
    int id;
    float salary;
};
int main(int argc, char *argv[]){
    
    
    struct employee list[SIZE],temp;
    for (int i=0; i<SIZE; i++) {
        printf("Enter the name of the employee:\n");
        scanf("%s",list[i].name);
        printf("Enter the surname of the employee:\n");
        scanf("%s",list[i].surname);
        printf("Enter the ID of the employee:\n");
        scanf("%d",&list[i].id);
        printf("Enter the salary of the employee:\n");
        scanf("%f",&list[i].salary);
    }
    

    printf("Here is the employees list by surname in alphabetical order:\n");
    for (int i=0; i<SIZE-1; i++) {
        for (int j=0; j<SIZE-i-1; j++) {
            if (strcmp(list[j].surname, list[j+1].surname)>0) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                
            }}}
    for (int i=0; i<SIZE; i++) {
        printf("Name:%s\n",list[i].name);
        printf("Surame:%s\n",list[i].surname);
        printf("ID:%d\n",list[i].id);
        printf("Salary:%.2f\n",list[i].salary);

    }
    
    

    return 0;
}
