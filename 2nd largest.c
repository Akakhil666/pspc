#include<stdio.h>
int main()
{
  int n,a[10],largest,i,j;
    
    printf("enter the number of elements ");
    scanf("%d",&n);

    printf("enter the number elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
            j=i;
        }
    }
    a[j]=0;
    largest=0;

    for(j=0;j<n;j++)
    {
        if(a[j]>largest)
        {
            largest=a[j];
        }
    }
    printf("the second largest number is %d",largest);

    return 0;
}