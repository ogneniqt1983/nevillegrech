#include <stdio.h>
#include <string.h>
# define SIZE 300
int main(int argc, const char * argv[]) {
    
    printf("Enter some text to be analyze and when ready  press '#' to stop.\n");
    char text[SIZE];
    int num=0,letters[num];
    int counter=0;
    fgets(text, 300, stdin);
    int length;
    length=(int)strlen(text);
    for (int i=0; i<length; i++) {
        if (text[i] != ' ') {
            counter++;}
        letters[num]=counter;
        num++;}
    for (int i=0; i<num; i++) {
        printf("%d ",letters[i]);
    }
    printf("%s\n",text);
        
    return 0;
}
