#include <stdio.h>
# define PRICE_01 100
# define PRICE_02 200
void list(void);
void menu(void);
int code_price(int);
const char *code_word(int);
int main(int argc, char *argv[]) {
    char items[2][10]={"Jacket","Shoes"};
    int choice,code,qty,run_tot=0,total=0;
    do {
        printf("Choose an item from the list below:\n");
        menu();
        scanf("%d",&choice);
        
        switch (choice) {
            case 1:
                list();
                printf("Enter a code from the list:\n");
                scanf("%d",&code);
                printf("You picked up: %s\n",code_word(code));
                printf("How many %s /s would you like?\n",code_word(code));
                scanf("%d",&qty);
                run_tot=run_tot+(qty*code_price(code));
                printf("By now you spend:€%d\n",run_tot);
                total=total+run_tot;
                printf("\n");
                break;
            case 2:
                printf("You are total spending so far is:€%d",total);
                break;
            case 3:
                printf("Your payable amount is : %d",total);
            case 4:
                printf("Your payable amount is : %d",total);
                
                
            default:
                break;
        }
        
        
        
    } while (choice != 'q');
    
    return 0;}
void list(void){
    printf("Code: 01 - Jacket - Price:€100.00 \n");
    printf("Code: 02 - Shoes - Price:€200.00 \n");}
void menu(void){
    printf("1. Add items to shopping cart\n");
    printf("2. Show current total\n");
    printf("3. Check out\n");
    printf("4. Cancel session\n");
    printf("q. Quit\n");}
const char *code_word(int code){
    char *items[]={"Jacket","Shoes"};
    if (code == 01) {
        return items[0];
    }
    else
        return items[1];
}
int code_price(int code){
    int items[2]={PRICE_01,PRICE_02};
    if (code == 01) {
        return items[0];
    }
    else
        return items[1];
}
    


