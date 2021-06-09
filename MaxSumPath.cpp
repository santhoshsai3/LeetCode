#include<iostream>
using namespace std;

int arr1[6] = {1,5,3,9,3,10};
int arr2[7] = {2,3,6,11,1,1,13};

int main()
{
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int commonsize = size1>size2?size2:size1;
    int i,sum=0;
    for(i=0;i<commonsize;i++)
    {
        if(arr1[i]>arr2[i])
            sum=sum+arr1[i];
        else 
            sum = sum + arr2[i];  
    }
    if(size1>size2)
    {
        for(i = commonsize; i<size1 ; i++)
            sum = sum + arr1[i];

    }
    else
    {
        for(i = commonsize; i<size2 ; i++)
            sum = sum + arr2[i];
    }
    cout<<sum;
    return 0;
}