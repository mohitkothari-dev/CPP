//Find the average of largest and smallest numbers in an unsorted integer array?Eg. [1, 4, 3, 2] => average = (1+4)/2 = 2.5[1, 4, 3, 4] => average = (1+4+4)/3 = 3
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

void findAverage(int intarray[], int l)
{
    int counter = 0.0;
    int sm = intarray[0];
    int lg = intarray[0];
    for(int i = 0; i<l; i++)
    {
        //if the current element is larger than the lg, then current elements is the largest element till now
        if(intarray[i]>lg)
        {
            if(intarray[i] == intarray[i+1])
            {
                intarray[i] += intarray[i+1];
                lg=intarray[i];  //assign the current element's value to lg 
                counter = counter + 1.0;
            }
            lg=intarray[i];  //assign the current element's value to lg
        }
        //if the current element is smaller than the sm, then current elements is the smallest element till now
        if(intarray[i]<sm)
        {
            sm=intarray[i];
        }
    }
    //cout<<"The smallest elements in the array: "<<sm<<endl;
    //cout<<"The largest elements in the array: "<<lg<<endl;

    //Now lets find the average of both
    float average = (sm + lg)/(2.0+counter);
    cout << fixed << setprecision(1);
    cout<<"Average of the SMALLEST and LARGEST element of the array is: "<<average<<endl;
}

int main()
{
    //Find an average of largest and smallest number in an array
    int arr[] = {1,4,3,2,4};

    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<len; i++)
    {
        for(int j = 0; j<len; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /*for(int i=0; i<len;i++)
    {
        cout<<arr[i]<<endl; //will display sorted array
    }*/
    findAverage(arr, len);
    return 0;
}