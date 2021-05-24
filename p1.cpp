//Find the counts of elements of an unsorted integer array which are equal to the average of all elements of that array.
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int sum(int arr[], int n)//n: no of elements in an array
{
    int sum =0;
    for (int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {4,10,25,3,7,6,4,5};
    //int len = sizeof(arr);//determines the size in bytes
    int len = sizeof(arr)/sizeof(arr[0]); //dividing with the size of first element i.e. 28/4
    cout<<"Total number of elements are:"<<len<<endl;
    cout<<"Sum of all the elements of an array:"<<sum(arr,len)<<endl;
    cout<<"Average of all the elements of an array:"<<sum(arr,len)/len;
    return 0;
}