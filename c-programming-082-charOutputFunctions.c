#include <stdio.h>

int main() {
    // putc
    char ch = 'a';
    
    putc(ch, stdout);

    // putchar
    char string[]= "Hello, \n whatever!";
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] != '\n') {
            putchar(string[i]);
        }
        ++i;
    }

    // putchar ex 2
    int ch1 = 0;
    while ((ch1 = getchar()) != EOF) {
        putchar(ch1);
    }

    ungetc(ch, stdin);
    printf("Thank you!\n");

    //fputc
    FILE *pFile = NULL;
    char c = '\0';

    pFile = fopen("myFile.txt", "w");

    if (pFile != NULL) {
        for (c = 'A'; c <= 'Z'; c++) {
            fputc(c, pFile);
        }
        fclose(pFile);
    }

    return 0;
}