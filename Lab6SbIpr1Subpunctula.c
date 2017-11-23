#include<stdio.h>
#include<string.h>

// Subpunctul a

char *strcpy_array(char dest[],char src[]);

char dest[50];
char src[50];
char *ptr;

int main()
{
    printf("Write the source string: \n");
    gets(src);
    dest[0]='\0';
    ptr=strcpy_array(dest,src);
    printf("The destination string after copying is: \n");
    printf("%s",ptr);
}

char *strcpy_array(char dest[],char src[])
{
    strcpy(dest,src);
    ptr=&dest[0];
    return ptr;
}
