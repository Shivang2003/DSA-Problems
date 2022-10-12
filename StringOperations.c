#include <stdio.h>
#include <string.h>

int main() {

  char s1[100] = "Shreenath Badwane";
  char s2[100] = "Studying in third year of Computer Engineering";
  char s3[100] = "Shreenath";
  char s4[100] = "Sneha";
  
  //writes the length of the string
  printf("Length of string string1: %ld\n", strlen(s1));
  
  printf("Length of string string1 when maxlen is 25: %ld \n", strnlen(s1, 25));
  //max Length is greater hence return Length of string
  printf("Length of string string1 when maxlen is 5: %ld \n", strnlen(s1, 10));
  //max Length is smaller hence return max Length 
  
  //compares the strings
  if (strcmp(s1, s2) == 0) 
  {
    printf("string 1 and string 2 are equal\n");
  } 
  else 
  {
    printf("string 1 and string 2 are different\n");
  }
  
  /* it only compares first 5 characters of both strings*/
  if (strncmp(s1, s3, 5) == 0) {
    printf("string 1 and string 3 are equal\n");
  } else {
    printf("string 1 and string 3 are different\n");
  }
  
  //attach the second string to the end of the first string
  strcat(s3, s2);
  printf("Output string after concatenation: %s\n", s3);
  
  //only the first n characters of the second string to the end of the first string.
  strncat(s1, s2, 8);
  printf("Concatenation using strncat: %s\n", s1);
  
  // copying string2 to string1
  strcpy(s1, s2); 
  printf("String s1 is: %s\n", s1);
  
  // it copies only the first n characters of string2 to string1
  strncpy(s1, s4, 6);
  printf("String s1 is: %s\n", s1);
  
  //It finds out the first occurrence of a given character in a string.
  printf("%s\n", strchr(s2, 'C'));
  
  //It finds out the last occurrence of a given character in a string.
  printf("%s\n", strrchr(s2, 'y'));
  printf("%s", strrchr(s3, 'x')); 
  
  //It finds out the first occurrence of a given string in a string.
  printf("\nOutput string is: %s\n", strstr(s2, "in t"));
  
  //It takes two strings as input and compares them irrespective of their case sensitivity.
  int result;
  result = strcasecmp(s1, s2);
  if (result == 0)
    printf("Strings are equal.\n");
    
  else if (result < 0)
    printf("\"%s\" is less than \"%s\".\n", s1, s2);
    
  else
    printf("\"%s\" is greater than \"%s\".\n", s1, s2);
  
  //compares till n characters irrespective of their case sensitivity.   
  result = strncasecmp(s2, s3, 3);
  if (result == 0)
    printf("Strings are equal.\n");

  else if (result < 0)
    printf("\"%s\" is less than \"%s\".\n", s2, s3);

  else
    printf("\"%s\" is greater than \"%s\".\n", s2, s3);    
  
  return 0;
}
