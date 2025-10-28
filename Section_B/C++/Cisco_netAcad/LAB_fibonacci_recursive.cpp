#include<iostream>
using namespace std;

long long int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int limit;
    cout << "Enter the limit up to which fibonacci sequence to be generated: " << endl;
    cin >> limit;

    if (limit <= 0) {
        cout << "Limit must be positive !!!" << endl;
        return 0;
    }

    cout << "The fibonacci sequence up to " << limit << "-th term is: " << endl;
    for (int i = 0; i < limit; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}