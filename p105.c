#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int i, count = 0;
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()
    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}

