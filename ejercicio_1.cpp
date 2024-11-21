#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int number = 5;
    float decimal = 3.141623; // can only have 5 decimals places, up to the number 2
    char letter = 'p';
    short int small_int = 10000;
    long long int big_number = 1000000000000;
    double many_decimals = 0.0000000000000123;
    bool is_true = true;
    bool is_false = false;
    cout << "- Data types:" << endl;
    cout << "int: " << number << endl;
    cout << "float: " << decimal << endl;
    cout << "char: " << letter << endl;
    cout << "short int: " << small_int << endl;
    cout << "long long int: " << big_number << endl;
    cout << "short int: " << small_int << endl;
    cout << "double: " << many_decimals << endl;
    cout << "bool: " << is_true << " -> is true" <<endl;
    cout << "bool: " << is_false << " -> is false"<< endl;

    int n1 = 7;
    int n2 = 2;
    cout << "\n- Arithmetic operations: " << endl;
    cout << "With number 1: " << n1 << ", and number 2: " << n2 << endl;
    cout << "Addition: " << n1+n2 << endl;
    cout << "Subtraction: " << n1-n2 << endl;
    cout << "Multiplication: " << n1*n2 << endl;
    cout << "Division: " << n1/n2 << endl;
    cout << "Remainder: " << n1%n2 << endl;

    int a, b;
    cout << "\n- Receive two values in a line: " << endl;
    cin >> a >> b; // we can receive two values in just one line
    cout << "a: " << a << " b: " << b << endl;

    cout << "\n- Remainder without arithmetic operator %." << endl;
    int division = a/b;
    int reminder = a - (b*division);
    cout << "Divison is: " << division << endl;
    cout << "Remainder is: " << reminder << endl;

    return 0;
}
