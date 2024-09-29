//take an array and find minimum and maximum element and swap their indexes
#include<iostream>
using namespace std;
int main(){
    int min;
    int max;
    int arr[8]={1,2,3,4,5,6,7,8};
    min=arr[0];
    max=arr[0];
    for(int i=0; i<8; i++){
        if(arr[i]<min)
        {
            min=arr[i];

        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum value of array is : "<<max<<endl;
    cout<<"Minimum value of array is : "<<min<<endl;
    return 0;
}