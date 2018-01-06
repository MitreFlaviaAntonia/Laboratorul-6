#include<stdio.h>
#include<string.h>

char src[100];
char dest[100];
char *cs;
char *ct;
int x;
int y;
int i;
int j;
int k;
int n;

 int strcomparation(char *cs,char *ct,int n)
{
    int ok=0;
    j=0;
    if(n>1)
    {
        for(k=0;k<=n-1;k++)
    {
        if(src[k]!=dest[j])
            {if(src[k]>dest[j])
                ok=1;return ok;;}
        else
            if(src[k]<dest[j])
                {ok=-1;return ok;}
        j++;
    }
    if(ok==0&&(strlen(src)>strlen(dest)))
        ok=1;

    if(ok==0&&(strlen(src)<strlen(dest)))
        ok=-1;
    }
    if(n==1)
        if(src[0]>dest[0])
            ok=1;
        else
            if(src[0]<dest[0])
                ok=-1;

    if(ok==0)
        return 0;

    return ok;
}

int main()
{
    int max;

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
    if(x>y)
        max=x;
    else
        max=y;
    n=max+1;
    while(n>max||n<=0)
    {
    printf("Give the number of elements to compare: ");
    scanf("%d",&n);
    }

    printf("\nThe result is=%d", strcomparation(cs,ct,n));


}
