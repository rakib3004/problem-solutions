#include<iostream>
using namespace std;
int Partition(int arr [],int p,int r)
{
    int x=arr[p];
    int i=p;

    for (int j=i+1;j<=r;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr [j]=temp;
        }
    }
    int temp=arr[i];
            arr[i]=arr[p];
            arr [p]=temp;
            cout<<"\nSorrted elemts:";



            return i;


}

void quick_sort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=Partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}
//int Partition(int [],int,int);

int main()
{
    int arr[100],n;

    cout<<"Enter total no.of elements: ";
    cin>>n;
    cout<<"enter the Elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"n\Sorted Elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
