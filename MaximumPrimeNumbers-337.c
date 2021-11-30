#include<stdio.h>
#include<math.h>

int main()
{




    int n;

    scanf("%d", &n);
    int result=0;

    int i,j;
    int flag =1;


    for(i=3; i<n; i++)
    {


        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag =0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            result=i;
        }
    }

    printf("%d", result);



    return 0;
}
