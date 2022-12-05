#include<stdio.h>
int main()
{
    int a,b,c,d,level;
    scanf("%d",&level);
    a=30000+1000+500;
    b=28000+750+200;
    c=26000+500+100;
    d=25000+250+50;
    (level==1)?printf("%d is gross salary",a):
        (level==2)?printf("%d is gross salary",b):
            (level==3)?printf("%d is gross salary",c):
                (level==4)?printf("%d is gross salary",d):
                    printf("None");
                    return 0;

}
