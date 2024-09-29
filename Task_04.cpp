//Find frequency of a given integer of a specific given integer in an array;
#include<iostream>
using namespace std;
int main(){
    int n, serchelement, count=0;
    cout<<"Please enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find its frequency : ";
    cin>>serchelement;

    for(int i=0; i<n; i++){
        if(arr[i]==serchelement){
            count++;
        }
    }
    cout<<"Frequency of "<<serchelement<<" IS "<<count;
    return 0;
}