/*
Find GCD
You are given two numbers. You need to calculate and print their greatest common divisor (GCD).
*/

#include<iostream> 
using namespace std; 

int findGCD(int a, int b) {    //assume a is greater than b
   if(a == 0 || b == 0)
      return 0;    //as a and b are 0, the greatest divisior is also 0
   if(a==b)
      return b;    //when both numbers are same
   if(a>b)
      return findGCD(a-b, b);
   else
      return findGCD(a, b-a);
}

// Driver function 
int main() 
{ 
   int a, b;
   cout << "Enter Two numbers to find GCD: "; cin >> a >> b;
   cout << "The GCD is: " << findGCD(a,b);
}
