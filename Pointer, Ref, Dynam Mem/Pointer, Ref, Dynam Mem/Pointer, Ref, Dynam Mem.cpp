// Colton Swartwoudt; Pointer, Ref, Dynam Mem.cpp
/*Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'. [Note, assert?]
Then create two integer pointers named ptrA and ptrB.
Assign the values of 'a' and 'b' to ptrA and ptrB,
and display them.
Take an input variable and display the same value by pointer.
*/

#include <iostream>
//#include <assert.h>

using namespace std;

int main() {
    int a, b;
    cout << "Please enter two (2) integer variables: \n";
    //If the exercise required input validation, a do-while loop w/ assert here would be sufficient
    cin >> a >> b;
    
    int* ptrA = &a;
    int* ptrB = &b;
    cout << "First Variable: " << *ptrA << "\n";
    cout << "First Variable: " << *ptrB << "\n";
    cout << "Please enter another variable: \n";
    int newVar = NULL;
    cin >> newVar;
    int* newVarPtr = &newVar;
    cout << "New Variable: " << *newVarPtr;
}