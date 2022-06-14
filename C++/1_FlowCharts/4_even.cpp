/*Print Even Numbers
Send FeedbackYou are given a single positive integer, N. You need to print all even integers that occur between 1 and N (both inclusive).
Draw a flowchart for this process*/
#include<iostream> 
using namespace std; 



// Driver function 
int main() 
{ 
    int n;
    cout << "Enter the limit:";
    cin >> n;
    cout << "Even numbers are:" << endl;
    for (int i = 0; i < n; i++){
       if (i%2 == 0){
           cout << i << endl;
       }
    }   
} 
