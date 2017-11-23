#include<stdio.h>
#include<string.h>

char *strcat_pointer(char *dest, char *src);

char first_array[50];
char second_array[50];
char *dest;
char *src;
char *ptr;

int main()
{
    printf("Write the source string: \n");
    gets(first_array);
    printf("Write the source string: \n");
    gets(second_array);
    ptr=strcat_pointer(dest,src);
    printf("The destination string after using the function is: \n");
    printf("%s",ptr);
}


char *strcat_pointer(char *dest, char *src)
{
    dest=&second_array[0];
    src=&first_array[0];
    strcat(dest,src);
    ptr=&second_array[0];
    return ptr;
}
