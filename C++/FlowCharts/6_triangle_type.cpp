/*
Check triangle

You are given the lengths of 3 sides of a valid triangle. You need to print any one of the following outputs depending on the triangle's nature.
Print 1, if the triangle is equilateral
Print 0, if it's isosceles
Print -1, if it's scalene

Sol:
Step 1: Declare three sides of triangle.
Step 2: Enter three sides at run time.
Step 3: If side1 == side2 && side2 == side3
Go to step 6
Step 4: If side1 == side2 || side2 == side3 || side3 == side1
Go to Step 7
Step 5: Else
Go to step 8
Step 6: Print the triangle is equilateral.
Step 7: Print the triangle is isosceles.
Step 8: Print the triangle is scalene.
*/
#include<iostream> 
using namespace std; 

// Driver function 
int main() 
{ 
    int s1, s2, s3;
    cout << "Enter 3 sides:"<< endl;
    cin >> s1 >> s2 >> s3;
    if (s1 == s2 && s2 == s3)
        cout << "triangle is equilateral"<< endl;
    else if (s1 == s2 || s2 == s3 || s3 == s1)    
        cout << "triangle is isosceles"<< endl;
    else
        cout << "triangle is scalene"<< endl;
} 
