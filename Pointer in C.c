#include <stdio.h>

void update(int *a,int *b) {
    printf("%dspace%d",*a,*b);
    *a=*a + *b;
    printf("%dspace%d",*a,*b);
    if(*a > *b)
      {
          *b=*a - *b;
          printf("%dspace%d",*a,*b);
      }
    else {
      *b=*b - *a;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
