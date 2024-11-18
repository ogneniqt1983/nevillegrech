#include <stdio.h>
#define FIRST 10000
#define FIRST_1 15000
#define SECOND 8000
#define THIRD 18000
float tax_10(float wage){
    float tax = 0.0;
    if (wage<=FIRST) {
        tax = wage*0.18;
        printf("Your first tax:%.2f\n",tax);
    }
    else if (wage>FIRST && wage<=(THIRD)){
        tax = (FIRST*0.18)+(wage-FIRST)*0.20;
        printf("Your first tax:%.2f,The second:%.2f, Total:%.2f\n",(FIRST*0.18),(wage-FIRST)*0.20,tax);
    }
    else if (wage>THIRD){
        tax = (FIRST*0.18)+(SECOND)*0.20+(wage-THIRD)*0.25;
        printf("Third:%.2f, Total:%.2f\n",(wage-THIRD)*0.25,tax);
        
    }
    else
        printf("Uanble to proceed.");
    return tax;
}
float tax_15(float wage){
    float tax = 0.0;
    if (wage<=FIRST_1) {
        tax = wage*0.18;
        printf("Your first tax:%.2f\n",tax);
    }
    else if (wage>FIRST_1 && wage<=(THIRD)){
        tax = (FIRST_1*0.18)+(wage-FIRST_1)*0.20;
        printf("Your first tax:%.2f,The second:%.2f, Total:%.2f\n",(FIRST_1*0.18),(wage-FIRST_1)*0.20,tax);
    }
    else if (wage>THIRD){
        tax = (FIRST_1*0.18)+(SECOND)*0.20+(wage-THIRD)*0.25;
        printf("Third:%.2f, Total:%.2f\n",(wage-THIRD)*0.25,tax);
        
    }
    else
        printf("Uanble to proceed.");
    return tax;
}
int main(int argc, const char * argv[]) {
    printf("Enter your wage to calculate the tax:\n");
    float wage,tax = 0.0;
    scanf("%f",&wage);
    tax = tax_10(wage);
    printf("Do you work in ICT department? y/n\n");
    getchar();
    char answer;
    scanf("%c",&answer);
    if (answer == 'y') {
        printf("Your total TAX is:%.2f - 5%% discount = %.2f\n",tax,(tax*0.95));
    }
    else
        printf("Your total TAX is %.2f",tax);
    printf("Do you dispose electronic equipment? y/n \n");
    getchar();
    scanf("%c",&answer);
    if (answer == 'y') {
        printf("Your total TAX is:%.2f\n",tax_15(wage));
    }
    else
        printf("Your total TAX is %.2f",tax);
    
    return 0;
}
