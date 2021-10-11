#include<stdio.h>
void main()
{
    int a[100],j,i,n,temp;
    printf("Enter the no.of elements:\n");
    scanf("%d",&n);
    printf("Enter the Elements One By One:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("After sorting:\n");
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
