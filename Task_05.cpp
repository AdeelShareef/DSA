//input a sum value from user and check in array which two values equate the given sum
#include<iostream>
using namespace std;
int main(){
    int n, targetsum;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element of "<<i<<"  : ";
        cin>>arr[i];
        cout<<endl;

    }
    cout<<endl;
    cout<<"Enter a target sum value: ";
    cin>>targetsum;
    bool found=false;
    for(int i=0; i<n-1; i++)
    {

        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==targetsum)
            {
                cout<<"Pair form : "<<arr[i]<<" , "<<arr[j]<<endl;
                found=true;
            }
        }
    }
    if(!found)
    {
        cout<<"No pair is found: ";
    }
    return 0;
}