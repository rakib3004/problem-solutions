#include<stdio.h>
int main()
{
    int c,m;
    printf("Enter the marks:");
    scanf("%d",&m);
    c=(m/10);
    switch(c){
         case 0:
case 1:
case 2:
case 3:
    if(m<=33)
    {
        printf("F");

    }
    else
    {
        printf("D");
    }
    break;
case 4:
    printf("c");
    break;

case 5:
    printf("B");
    break;

case 6:
    printf("A-");
    break;

case 8:
case 9:
    printf("A+");
    break;

case 10:
        if(m<100)
        {
            printf("A+");

        }
        else
            printf("Invalid");
    }




return 0;
}
