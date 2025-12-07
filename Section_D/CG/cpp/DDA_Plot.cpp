#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>     // for popen

using namespace std;

// Function to compute DDA line points
vector<pair<int,int>> dda(int x1, int y1, int x2, int y2) {
    vector<pair<int,int>> points;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float xInc = dx / (float) steps;
    float yInc = dy / (float) steps;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        points.push_back({(int)round(x), (int)round(y)});
        x += xInc;
        y += yInc;
    }
    return points;
}

int main() {
    int x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    // Compute DDA points
    vector<pair<int,int>> pts = dda(x1, y1, x2, y2);

    // Print points
    cout << "\nDDA Line Points:\n";
    for (auto &p : pts)
        cout << "(" << p.first << ", " << p.second << ")\n";

    // Open gnuplot pipe
    FILE* gnuplot = popen("gnuplot -persist", "w");

    fprintf(gnuplot, "set title 'DDA Line Plot'\n");
    fprintf(gnuplot, "set xlabel 'X'\n");
    fprintf(gnuplot, "set ylabel 'Y'\n");
    fprintf(gnuplot, "plot '-' with points pointtype 7 pointsize 1.5\n");

    // send points to gnuplot
    for (auto &p : pts) {
        fprintf(gnuplot, "%d %d\n", p.first, p.second);
    }

    fprintf(gnuplot, "e\n");
    fflush(gnuplot);

    pclose(gnuplot);
    return 0;
}