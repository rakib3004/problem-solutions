#include<stdio.h>

int main(){


int firstNumber=1;

int lastNumber=10;

int i;

int sum=0;

for(i=firstNumber;i<=lastNumber;i++){

sum = sum + (i*i);

}


printf("The  Square Sum of 1 to 10 is: %d",sum);


return 0;

}
