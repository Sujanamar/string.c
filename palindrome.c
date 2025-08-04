#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
    int i, len, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);

  len = strlen(str);

  
 for (i = 0; i < len / 2; i++) {
