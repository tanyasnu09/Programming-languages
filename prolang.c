#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, t,a,b,c,d,e,f;
    printf("enter no of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("enter a\n enter b\n enter c \n enter d \n enter e\n enter f ");
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if ((a==c ||a==d)&&(b==c ||b ==d))
        {
            printf("1\n");

        }
        else if ((a==e ||a==f)&&(b==e||b ==f))
        {
            printf("2\n");
        }
        else
        {
            printf("0");
        }

    }
}