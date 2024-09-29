//inpput a number from user and make its digits the entries of an array.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;

    int digits =0;
    int count = number;
    while(count > 0){
        digits++;
        count /=10;

    }
    int digitsArr[digits];
    for(int i=digits-1; i>=0; i--){
        digitsArr[i]= number %10;
        number /=10;

    }
    cout<<"Array is :[";
    for(int i=0; i< digits; i++)
    {
    cout<<digitsArr[i]<<" ";
    }
    cout<<"]";
    return 0;
}