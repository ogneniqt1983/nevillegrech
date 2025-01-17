#include <string.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char text[500];
    char *pt;
    char suffix[]="*** ";
    
    printf("Enter a text:\n");
    fgets(text, 500, stdin);
    pt = strtok(text, " ");
    
    while (pt != NULL) {
        printf("%s%s",pt,suffix);
        pt = strtok(NULL, " ");
    }
    
    
    
    printf("\n");
    return 0;
}
