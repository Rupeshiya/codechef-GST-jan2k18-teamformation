#include<stdio.h>
int main()
{
    int t,i,j,n,k,m,x;
    unsigned long long int a[10000],min,max,sum1=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            for(i=1;i<=n;i++)
            {
            scanf("%d",&a[i]);
            }
            min=a[1];
            for(k=1;k<=n;k++)
            {
                if(min>a[k])
                min=a[k];
            }
            max=a[1];
            for(x=1;x<=n;x++)
               {
                if(max<a[x])
                    max=a[x];
            }
           sum1=sum1+(max-min);
        }
        printf("%d\n",sum1);

    }
    return(0);
}


