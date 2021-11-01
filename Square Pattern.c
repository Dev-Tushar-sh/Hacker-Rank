#include<stdio.h>
void main()
{
    int n,i,j,k,a,b,d,c=0,e=2,f,g,l,m,o,p,q=3;
    printf("Enter the number of line - ");
    scanf("%d",&n);
    c=n;p=n;
    for(i=1;i<=n;i++)
    {
        f=n;
        for(j=1;j<i;j++)
        {
            printf("%d ",f);
            f--;
        }
        for(k=i*2-1;k<n*2;k++)
        {
            printf("%d ",c);

        }
        for(m=2;m<=i;m++)
        {
            p++;
           printf("%d ",p);

        }
        p=n-i;
        c--;
        printf("\n");
    }
    for(a=2;a<=n;a++)
    {
        g=n;
        for(b=a;b<n;b++)
        {
          printf("%d ",g);
          g--;
        }
        for(d=1;d<=a*2-1;d++)
        {
          printf("%d ",e);
        }
        for(o=a;o<n;o++)
        {
            printf("%d ",q);
            q++;
        }
        q=a+2;
        e++;
        printf("\n");
    }
}
