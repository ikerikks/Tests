#include <stdio.h>

void reverse();

int main()
{
    printf("Please enter a sentence: ");
    reverse();
    putchar('\n');
}

void reverse()
{
    char c; 
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }

}
