#include<iostream>
using namespace std;

int factorial_Recursion(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial_Recursion(n);

    return 0;
}

int factorial_Recursion(int n)
{
    if(n > 1)
        return n * factorial_Recursion(n - 1);
    else
        return 1;
}
