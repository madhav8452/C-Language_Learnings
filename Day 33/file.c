#include <stdio.h>

int main() {
    FILE *source_file, *target_file;
    char ch;

    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    target_file = fopen("target.txt", "w");
    if (target_file == NULL) {
        printf("Error opening target file.\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully.\n");

    return 0;
}
