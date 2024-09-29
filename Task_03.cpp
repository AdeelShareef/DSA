#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 1, 2, 2, 2, 3, 4, 5, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    bool foundDuplicate = false; 

    cout << "Duplicate entries are: ";

    for (int i = 0; i < size; i++) {
        int current = arr[i];
        bool isDuplicate = false; 
       
        for (int j = i + 1; j < size; j++) {
            if (current == arr[j]) {
                isDuplicate = true; 
                break; 
            }
        }

        if (isDuplicate) {
            
            if (!foundDuplicate) {
                cout << current << " ";
                foundDuplicate = true; 
            }
        }
    }

    if (!foundDuplicate) {
        cout << "None";
    }

    cout << endl; 
    return 0;
}
