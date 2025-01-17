#include <stdlib.h>
#include <stdio.h>
#include<string.h>

int main(int argc, const char * argv[]) {
    FILE *fp,*fp2;
    char *buffer;
    long size;
    fp = fopen("text.txt", "rb");
    if (fp == NULL) {
        printf("Problem opening the file!");
        exit (EXIT_FAILURE);
    }
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    
    buffer = malloc(size);
    if (buffer == NULL) {
        printf("Problem with allocating the memory for the new content.");
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    
    fread(buffer, 1, size, fp);
    fp2 = fopen("text2.txt", "wb");
    if (fp2==NULL) {
        printf("Problem opening the destination file!");
        free(buffer);
        fclose(fp2);
        exit(EXIT_FAILURE);
    }
    fwrite(buffer, 1, size, fp2);
    
    
    
    fclose(fp);
    fclose(fp2);
    free(buffer);
    return 0;
}
