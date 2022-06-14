/*
Check Prime
Draw a flowchart to take a number N from user. And check if that number is prime or not.
Print "Yes" if number is prime, otherwise print "No".
Assume N >= 2.
*/
#include<iostream> 
using namespace std; 


bool check_prime (int N){
    for (int i=2; i < N; i++){
        if (N%i == 0){
            return false;
        }
    }
    return true;
}
// Driver function 
int main() 
{ 
    int N;
    cout << "Enter the Number:"<< endl;
    cin >> N;
    if (check_prime (N))
        cout << "Number is a prime number"<< endl;
    else
        cout << "Number is not a prime number"<< endl;
} 
