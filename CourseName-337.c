#include<stdio.h>
int main()
{
    int n;
    char name[50];

    char courseName[8][6][5000];

    // courseName[0][0]="Fundamentals of Computer and Computing";
    printf("Enter the semester number:");
    scanf("%d",&n);
    printf("Course name:\n");

    if(n=1)
    {
        printf("1.CSE-1101:Fundamentals of Computer and Computing\n"
               "2.CSE-1102:Discrete Mathematics\n"
               "3.EEE-1103:Electrical Circuits\n"
               "4.CHE-1104Chemistry\n"
               "5.MATH-1105Differential and Integral Calcuius\n"
               "6.SS-1106Government and Public Administration\n");

    }

    else if(n==2)
    {
        printf("1.CSE-1202:Fundamentals of Programing\n"
               "2.CSE-1202:Digital logic Design\n"
               "3.PHY-1203:Physics\n"
               "4.MATH-1204:Methods of Integration,Differential equations and Series\n"
               "5.ENG-1205:Devoloping English Language Skills");


    }
    else if(n==3)
    {
        printf("1.CSE-2101:Data Structure and Algorithms\n"
               "2.CSE-2102:Object Orianted and Programming\n"
               "3.CSE-2103:digital Electronics and Puls Techniques\n"
               "4.EEE-2105\n"
               "5.MATH-2105\n"
               "6.SS-2106\n");
    }
    else if(n==4)
    {
        printf("1.CSE-2201\n"
               "2.CSE-2202\n"
               "3.CSE-2203\n"
               "4.CSE-2204\n"
               "5.CSE-2205\n"
              );
    }

    else if (n==5)
    {
        printf("1.CSE-3101\n"
               "2.CSE-3102\n"
               "3.CSE-3103\n"
               "4.CSE-3104\n"
               "5.MATH-3105\n");

    }

    else if(n==6)
    {
        printf("1.CSE-3201\n"
               "2.CSE-3202\n"
               "3.CSE-3203\n"
               "4.CSE-3204\n"
               "5.STAT-3205\n");

    }

    else if(n==7)
    {
        printf("1.CSE-4101\n"
               "2.CSE-4102\n"
               "3.SS-4103\n"
               "4.CSE-4XXX\n"
               "5.CSE-4XXX\n");

    }

    else if(n==8)
    {
        printf("1.ECO-4201\n"
               "2.CSE-4202\n"
               "3.SS-4203\n"
               "4.CSE-4XXX\n"
               "5.CSE-4XXX\n");
    }

    return 0;
}
