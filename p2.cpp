//Given n email addresses of different domains, please send an email to the first address(in alphabetical order) of each domain. Please assume a function sendmail() to send the emails.
#include <iostream>
#include <string.h>

using namespace std;


void SendMail(string arr[], string arr2[], int l)
{
    for(int i=0; i<l; i++)
    {
        if(arr[i][4]==arr[i+1][4])
        {
            if(arr[i][0]<arr[i+1][0]){
            arr2[i]=arr[i];
            cout<<"Email has been sent to: "<<arr2[i]<<endl;
            }else{
                //cout<<"Remaining values of string 1:"<<arr[i]<<endl;
            }
        }else{
            //cout<<"String 1 values are:"<<arr[i]<<endl;
        }
    }
    
}

int main()
{
    string str[] = {"ghi@hotmail.com", "def@yahoo.com", "ghi@gmail.com", "abc@channelier.com", "abc@hotmail.com", "def@hotmail.com", "abc@gmail.com", "abc@yahoo.com", "def@channelier.com", "jkl@hotmail.com", "ghi@yahoo.com", "def@gmail.com"};
    string str2[] = {};

    //cout<<sizeof(str)[0]<<endl; //24 bytes for each string
    int l = sizeof(str)/sizeof(str[0]); //There are 12 email ids in the string
    //cout<<l<<endl;
    for(int i=0; i<l; i++)
    {
        //cout<<str[i][4]<<endl;    //hygchhgychyg
        for(int j=0; j<l; j++)      //j=i+1: descending
        {
            //if(str[i][0] < str[j][0]) //sorting according to first letter of the email
            if(str[i][4] < str[j][4])   //sorting according to the email address
            {
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    SendMail(str, str2, l);
    //if any duplicate entry is there at str[i][4] then remove all the duplicate entries 
    return 0;
}