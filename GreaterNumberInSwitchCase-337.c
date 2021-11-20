#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any two number : ");
    scanf("%d%d",&x,&y);
    int flag=1;

    switch(x>y)
    {
    case 1:

            printf("%d is greater then %d",x,y);
            break;

    case 0:
        printf("%d is greater then %d",y,x);
                break;


    }
}
