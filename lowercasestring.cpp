#include <iostream> 

#include <algorithm> 

#include <unordered_map> 

#include<queue> 

using namespace std; 

int main () 

{    ///task 4 

string s; 

cout << "Enter the string : "; 

cin >>s; 

unordered_map<char ,int>freq; 

    for(auto c : s) 

        freq[c]++; 

    for(auto c : s) 

        if (freq[c] == 1){ 

            cout <<"the first non-repeating character is : " <<c; 

            break; 

} 

 

    return 0; 

} 