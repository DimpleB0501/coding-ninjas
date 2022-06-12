/*
Sum of evens
You are given a single positive integer, N. You need to calculate and print the sum of all even numbers till N(inclusive)
*/

#include<iostream> 
using namespace std; 

// Driver function 
int main() 
{ 
    int N, sum_even=0;
    cout << "Enter limit:"<< endl;
    cin >> N;
    for (int i=0; i <= N; i++){
        if (i%2 == 0){
             sum_even += i;
        }       
    }
    cout << "Sum of all even numbers till limit is:";
    cout << sum_even << endl;
} 
