/*Find Product
You are given a single non-negative integer, N. You need to calculate and print N factorial (N!)
N factorial is defined as the product of all integers from 1 to N (both inclusive)*/
#include<iostream> 
using namespace std; 



// Driver function 
int main() 
{ 
    int n, fact = 1;
    cout << "Enter the limit:";
    cin >> n;

    for (int i = n; i > 0; i--){
        fact *= i;
    }   
    cout << fact << endl;
} 
