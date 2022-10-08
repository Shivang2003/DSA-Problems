#include <string.h>
#include <stdio.h>

int main() {
    char str[20]; 
    printf("Enter a string\n");
    gets(str);
    int size = strlen(str);
    int flag = 0;
    for(int i=0; i<size/2; i++){
            if(str[i]==str[size-i-1]){
                flag=0;
            }
            else
            flag=1;
    }
    if(flag==0)
    printf("String is Palindrome");
    else
    printf("NOT Palindrome");
    return 0;
}
