//input three sorted arrays and find common among them 
#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[4]={2,3,4,5};
    int arr3[3]={3,4,5};
    int a,b,c;
    //int size;
    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    int size3= sizeof(arr3)/sizeof(arr3[0]);

    int arr2chk=0;
    int arr3chk=0;
    for(a=0; a<size1; a++)
    {
        int current = arr1[a];
        for(b=0; b<size2; b++)
        if(arr2[b]==current)
        {
            for(c=0; c<size3; c++)
            if(current==arr3[c])
            {
                cout<<current<<" ";
            }
        }
    }
    return 0;
}