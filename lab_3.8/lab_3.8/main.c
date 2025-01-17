#include<stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, const char * argv[]) {
    int ch;
    FILE *pt;
    for (int i=0; i<argc; i++) {
    int count =0;
    assert((pt = fopen(argv[i], "r")) != NULL);
    while((ch =getc(pt))!=EOF){
        putc(ch, stdout);
        count++;
        }
    }
    
    fclose(pt);
    return 0;
}
