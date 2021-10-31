#include<stdio.h>
int main()
{
    int n,x,y,s,b;
    printf("Select your option : \n");
    printf("1.Addition\n 2.subtraction \n 3.sin value \n 4.cos value \n 5.log value\n\n \n") ;
    scanf("%d",&n);

    if(n==1)
    {
        printf("option 1:Addition\n");
        printf("Enter two number:\n");
        printf("1 st number : ");
        scanf("%d",&x);
        printf("2 nd number : ");
        scanf("%d",&y);
        s=x+y;
        printf("The sum is: %d\n",s);

    }


        if(n==2)
    {
        printf("option 1:subtraction\n");
        printf("Enter two number:\n");
        printf("1 st number : ");
        scanf("%d",&x);
        printf("2 nd number : ");
        scanf("%d",&y);
        b=x-y;
        printf("The sum is: %d\n",b);


    }


    if(n==3)
    {

    int x1;
    float x,sinx,sinval;


    printf("Enter the value of x (in degree):");
    scanf("%f",&x);
    x1=x;
    x=x*(3.1416/180);
    sinval=sin(x);
    printf("%f is the result",sinval);

    }



    if(n==4)
    {
        int x1;
    float x,cosx,cosval;


    printf("Enter the value of x (in degree):");
    scanf("%f",&x);
    x1=x;
    x=x*(3.1416/180);
    cosval=cos(x);
    printf("%f is the result",cosval);


    }



    if(n==5)
    {


    double x,result;


    printf("Enter the value of x : ");
    scanf("%lf",&x);

    result=log(x);

    printf("The log value of %lf is : %lf",x,result);


    }




    return 0;


}
