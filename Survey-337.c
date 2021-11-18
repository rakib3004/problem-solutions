#include<stdio.h>
#include<string.h>

struct Person
{
    int n,id;
    char *name,*dept,*occupation;


};

struct Person person[50];

int main()
{
    int n;

    person[0].id=1001;
    person[0].name="Ritu";
     person[0].dept="CSE";
      person[0].occupation="Programmer";

      scanf("%d",&n);
    printf("Id : %d\n ",person[n].id);
    printf("Name : %s\n",person[n].name);
    printf("Department : %s\n ",person[n].dept);
    printf("Occupation: %s\n ",person[n].occupation);
    return 0;
    }
