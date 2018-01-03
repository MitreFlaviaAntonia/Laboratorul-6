#include<stdio.h>

int a[100];
int  length, i;
int *min, *max;

void minmax(int a[], int *min, int *max)
{
    *min=99999;
    *max=0;

    for(i=0;i<=length-1;i++)
    {
        if(a[i]<*min)
            *min=a[i];

        if(a[i]>*max)
            *max=a[i];
    }
}
int main()
{
    printf("Give the number of elements in the array: ");
    scanf("%d",&length);

    printf("\nGive the values for the array: ");
    for(i=0;i<=length-1;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    minmax(a,&min,&max);
    printf("\nThe minimum value=%d",min);
    printf("\nThe maximum value=%d",max);

}
