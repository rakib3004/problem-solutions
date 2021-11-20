#include<stdio.h>
int main()
{
    char m[500];
    printf("Enter the name of month:");
    scanf("%s",&m);
    switch((unsigned long int)m)
    {
    case "January":
        printf("31 Days");
        break ;

            case "February":
        printf("28 Days");
        break ;


            case "March":
        printf("31 Days");
        break ;


            case "April":
        printf("30 Days");
        break ;


            case "May":
        printf("31 Days");
        break ;


            case "JUne":
        printf("30 Days");
        break ;

            case "July":
        printf("31 Days");
        break ;


            case "August":
        printf("31 Days");
        break ;


            case "Septembar":
        printf("30 Days");
        break ;


            case "October":
        printf("31 Days");
        break ;

            case "november":
        printf("30 Days");
        break ;


            case "December":
        printf("31 Days");
        break ;



    }
}
