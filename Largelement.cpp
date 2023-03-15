#include <iostream> 

#include <algorithm> 

#include <unordered_map> 

#include<queue> 

using namespace std; 

int main () 

{    

/// task3 

    int arr[50], size, i, largest, second_largest; 

    cout << "Enter the size of the array: "; 

    cin >> size; 

    cout << "Enter the elements of the array:\n"; 

    for(i = 0; i < size; i++) 

        cin >> arr[i]; 

 

    largest = arr[0]; 

    second_largest = arr[1]; 

    for(i = 1; i < size; i++) 

    { 

        if(arr[i] > largest) 

        { 

            second_largest = largest; 

            largest = arr[i]; 

        } 

        else if(arr[i] > second_largest && arr[i] != largest) 

            second_largest = arr[i]; 

    } 

    cout << "The second largest element in the array is: " << second_largest << endl; 

    return 0; 

} 