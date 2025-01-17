#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *file = fopen("data.bin", "wb"); // Open file in binary write mode
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int data[5] = {10, 20, 30, 40, 50};
    size_t elementsWritten = fwrite(data, sizeof(int), 5, file); // Write 5 integers

    printf("Number of elements written: %zu\n\n", elementsWritten);

    fclose(file);
    return 0;
}
