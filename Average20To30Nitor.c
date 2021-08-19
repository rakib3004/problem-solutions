#include<stdio.h>

int main(){


int firstNumber=20;

int lastNumber=30;

int i;

int sum=0;

for(i=firstNumber;i<=lastNumber;i++){

sum = sum + i;

}

double average = sum/(lastNumber-firstNumber+1);

printf("The Average of 20 to 30 is: %lf",average);


return 0;

}
