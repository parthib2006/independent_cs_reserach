#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter your choice\n0 to exit\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division" << endl;
    cin >> choice;
    int op1, op2;
    cout << "Enter two operands: " << endl;
    cin >> op1 >> op2;
    switch (choice)
    {
    case 0:
        return 0;
    case 1:
        cout << op1 + op2 << endl;
        break;
    case 2:
        cout << op1 - op2 << endl;
        break;
    case 3:
        cout << op1 * op2 << endl;
        break;
    case 4:
        cout << op1 / op2 << endl;
        break;
    default:
        cout << "Invalid input!!! Enter between 0 and 4" << endl;
    }
    return 0;
}