#include <stdio.h>
#include <string.h>

int main() {

char c[100];
printf("Enter a sentence : ");
scanf("%s", c); 
int len = strlen(c);

for (int i = len; i >= len; i--) {
printf("%c\n", c[i]);

} 



return 0;


}
