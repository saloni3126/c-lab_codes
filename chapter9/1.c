#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");
    
    if (file == NULL) {
        return 1;
    }
    
    fprintf(file, "Hello, this is a text written to the file!\n");
    fprintf(file, "C programming is fun!\n");
    
    fclose(file);
    
    return 0;
}
