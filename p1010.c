#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    char *words[50]; 
    int i = 0, word_count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[word_count++] = token;
        token = strtok(NULL, " ");
    }
    printf("Reversed words: ");
    for (i = word_count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}

