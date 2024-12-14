#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
        scanf("%d",&b[i]);
    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
            min=a[i];
    }

    int count=0;
    for(int i=0; i<n; i++)
    {
        while(min<a[i])
        {
            a[i]=a[i]-b[i];
            count++;
        }
        if(a[i]!=min)
        {
            printf("%d",-1);
            return 0;
        }
    }
    printf("%d",count);
}
