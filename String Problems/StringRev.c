#include <stdio.h>

int main() {
    char str[20], rev[20]; 
    printf("Enter a string\n");
    gets(str);
    int size = strlen(str);
    int j=0;
    for(int i = size - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
        
    }
    for(int i=0; i<size; i++){
        printf("%c", rev[i]);        
    }
    
    return 0;
}
