#include<stdio.h>

int main(){


int firstNumber=10;

int lastNumber=50;

int i;


printf("Even Numbers: \n");
for(i=firstNumber;i<=lastNumber;i++){
if(i%2==0){
    printf("%d\n",i);
}


}

printf("Odd Numbers: \n");
for(i=firstNumber;i<=lastNumber;i++){

if(i%2==1){
    printf("%d\n",i);
}

}







return 0;

}
