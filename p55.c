#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (isupper(input)) {
        printf("%c is an uppercase letter.\n", input);
    } else if (islower(input)) {
        printf("%c is a lowercase letter.\n", input);
    } else if (isdigit(input)) {
        printf("%c is a digit.\n", input);
    } else {
        printf("%c is not an uppercase letter, lowercase letter, or digit.\n", input);
    }

    return 0;
}
