#include <iostream>
#include <cmath>
using namespace std;

void DDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float x_inc = dx / (float) steps;
    float y_inc = dy / (float) steps;

    float x = x1;
    float y = y1;

    cout << "DDA Line Points:\n";
    for (int i = 0; i <= steps; i++) {
        cout << "(" << round(x) << ", " << round(y) << ")\n";
        x += x_inc;
        y += y_inc;
    }
}

int main() {
    int x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    DDA(x1, y1, x2, y2);

    return 0;
}