#include<stdio.h>
#include<string.h>

//Subpuntul b

int strlen_pointer( char *strp );

int lenght;
int *arr;
char array[50];

int main()
 {
     printf("Get the array: \n");
     gets(array);
     lenght=strlen_pointer(array);
     printf("The lenght of the array is: %d",lenght);
 }


 int strlen_pointer( char *strp )
 {
     strp=&array[0];
     int x;
     x=strlen(array);
     return x;
 }
