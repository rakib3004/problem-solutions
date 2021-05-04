
#include<bits/stdc++.h>
using namespace std;



int main()
{


    int i;
    int array[10];
    int point=0;
    for(i=0; i<10; i++)
    {

        array[i]=i;

    }

        cout<<"----------------------------------------------\n";
        cout<<"----------Guess Any Number From 0 to 9--------\n";
        cout<<"----------------------------------------------\n";

        while(1)
    {

        string YesOrNo ="";
        cout<<"Do you want to continue this game??\n To Continue Press Y ,\n For Exit Press No: ";

            cin>>YesOrNo;
        if(YesOrNo=="Y")
        {
            cout<<"Enter Your Number: ";
            int guess=0;

            cin>>guess;

            if(guess==rand()%10)
            {
                point++;
                cout<<"Your Guessing is correct!!!!!\n";
            }
            else
            {

                cout<<"Your Guessing is wrong!!!!!\n";

            }
            cout<<"Your Point is: "<<point<<endl;

        }
        else
        {

            return 0;
        }



    }




    return 0;

}
