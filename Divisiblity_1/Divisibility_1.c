#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[n]%10==0)
        printf("YES\n");
    else
        printf("NO\n");
}
