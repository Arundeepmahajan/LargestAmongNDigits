#include <stdio.h>
int main()
{
    int n;
    int i,max;
    int a[100000];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d\n",max);
}