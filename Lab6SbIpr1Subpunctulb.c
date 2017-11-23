#include<stdio.h>
#include<string.h>

//subpunctul b

char *strcpy_pointer( char *dest, char *src );

char destination[50];
char source[50];
char *dest;
char *src;
char *ptr;

int main()
{
    printf("Write the source string: \n");
    gets(source);
    destination[0]='\0';
    ptr=strcpy_pointer(dest,src);
    printf("The destination string after copying is: \n");
    printf("%s",ptr);
}

char *strcpy_pointer( char *dest, char *src )
{
    dest=&destination[0];
    src=&source[0];
    strcpy(destination,source);
    ptr=&destination[0];
    return ptr;
}
