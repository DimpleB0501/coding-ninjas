/* C++ program to check if three 
sides form a triangle or not 
A triangle is a valid triangle, 
If and only If, the sum of any two sides of a triangle is greater than the third side. 
For Example, let A, B and C are three sides of a triangle. Then, A + B > C, B + C > A and C + A > B
*/
#include<iostream> 
using namespace std; 
  
// function to check if three sider 
// form a triangle or not 
bool checkValidity(int a, int b, int c) 
{ 
    // check condition 
    if (a + b <= c || a + c <= b || b + c <= a) 
        return false; 
    else
        return true; 
} 
  
// Driver function 
int main() 
{ 
    int a = 7, b = 10, c = 5; 
      
    if (checkValidity(a, b, c)) 
        {
        cout << "Valid"<<endl; 
        }
    else
        cout << "Invalid"<<endl;     
} 