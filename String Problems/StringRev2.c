// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[20]; 
    printf("Enter a string\n");
    gets(str);
    int size = strlen(str);
    for(int i = size - 1; i >= 0; i--) {
        printf("%c", str[i]);        
    }
    return 0;
}