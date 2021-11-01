#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[50];
    char sen[100];
    scanf("%c",&ch);
    scanf("%c",&s);
    gets(sen);
    printf("%c",ch);
    printf("%s",s);
    puts(sen);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[50],sen[100];
    scanf("%c%s\n%[^\n]sen",&ch,&s,&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return(0);
}
