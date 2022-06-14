/*
How to check if a given number is Fibonacci number?
Soln:
A simple way is to generate Fibonacci numbers until the generated number is greater than or equal to ‘n’. 
Following is an interesting property about Fibonacci numbers that can also be used to check if a given number is Fibonacci or not. 
A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square (Source: Wiki). 
*/

#include<iostream> 
#include <math.h>
using namespace std; 

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}

// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

// Driver function 
int main() 
{ 
   for (int i = 1; i <= 10; i++)
     isFibonacci(i)? cout << i << " is a Fibonacci Number \n":
                     cout << i << " is a not Fibonacci Number \n" ;
}
