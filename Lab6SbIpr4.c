#include<stdio.h>
#include<string.h>

int strend(char *src, char *trc);

char s[50];
char t[50];
char *src;
char *trc;
int value;

int main()
{
    printf("Write the first string: \n");
    gets(s);
    printf("Write the second string: \n");
    gets(t);
    src=&t[0];
    trc=&s[0];
    value=strend(src,trc);
    printf("The value of the function is: ");
    printf("%d\n",value);
    if (value==1)
        printf("The second string is at the end of the first string!");
    else
        printf("The second string is NOT at the end of the first string!");
}


int strend(char *src, char *trc)
{
    int x, i, y, search;
    x=strlen(s);
    y=strlen(t);
    search=x-y;

    for(i=0;i<=y-1;i++)
    {
        if(s[search+i]!=t[i])
            return 0;
    }
    return 1;


}
