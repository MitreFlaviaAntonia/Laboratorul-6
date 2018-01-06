
#include<stdio.h>
#include<string.h>

char src[100];
char dest[100];
char *s;
char *ct;
int x;
int y;
int i;
int j;
int k;
int n;

 char *strconcatnchr(char *s,char *ct,int n)
{
    j=0;
    for(k=x;k<=x+n-1;k++)
    {
        src[k]=dest[j];
        j++;
    }

    src[k]='\0';
    s=&src;
    return s;
}

int main()
{

    printf("Give the number of elements in the first array: ");
    scanf("%d",&x);

    k=x;

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

    printf("\nThe string after concatenating is=%s", strconcatnchr(s,ct,n));


}
