#include<stdio.h>
#include<string.h>

//Subpuntul a

int strlen_array( char array[] );

int lenght;
char array[50];

int main()
 {
     printf("Get the array: \n");
     gets(array);
     lenght=strlen_array(array);
     printf("The lenght of the array is: %d",lenght);
 }


 int strlen_array( char array[] )
 {
     int x;
     x=strlen(array);
     return x;
 }
