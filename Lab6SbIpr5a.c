#include<stdio.h>
#include<string.h>

char src[100];
char dest[100];
char *s;
char *ct;

 char *strcopynchr(char *s,char *ct,int n)
{
    int i=0;

    while((dest[i]!='\0')&&(i<=n-1))
    {
        src[i]=dest[i];
        i++;
    }

    src[i]='\0';
    s=&src;
    return s;

}
int main()
{
    int i;
    int j;
    int x;
    int y;
    int n;

    printf("Give the number of elements in the first array: ");
    scanf("%d",&x);

    printf("\nGive the values for the array: ");
    for(i=0;i<=x-1;i++)
    {
        printf("src[%d]=",i);
        scanf("%s",&src[i]);
    }

    printf("Give the number of elements in the second array: ");
    scanf("%d",&y);

    printf("\nGive the values for the array: ");
    for(j=0;j<=y-1;j++)
    {
        printf("dest[%d]=",j);
        scanf("%s",&dest[j]);
    }

    printf("Give the number of elements to copy: ");
    scanf("%d",&n);

    printf("\nThe string after copying is=%s", strcopynchr(s,ct,n));


}
