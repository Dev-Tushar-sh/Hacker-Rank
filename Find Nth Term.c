#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
    int t;
    if(n==1)
        return(a);
    else if(n==2)
           return(b);
          else if(n==3)
                return(c);
                else if(n==4)
                      return(a+b+c);
                      else
                      {
                          t=find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
                          return(t);
                      }


}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}