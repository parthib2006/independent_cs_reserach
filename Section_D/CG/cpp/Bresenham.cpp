#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <cstdlib>

using namespace std;

// Bresenham function
vector<pair<int,int>> bresenhamLine(int x0, int y0, int x1, int y1) {
    vector<pair<int,int>> points;

    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;

    int err = dx - dy;

    while (true) {
        points.push_back({x0, y0});

        if (x0 == x1 && y0 == y1) break;

        int e2 = 2 * err;

        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }

    return points;
}

int main() {
    int x0, y0, x1, y1;

    cout << "Enter x0 y0: ";
    cin >> x0 >> y0;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    // Generate points
    vector<pair<int,int>> pts = bresenhamLine(x0, y0, x1, y1);

    // Save points to file
    ofstream fout("bres_points.dat");
    for (auto &p : pts) {
        fout << p.first << " " << p.second << "\n";
    }
    fout.close();

    // Create a gnuplot script
    ofstream gnu("plot_bres.plt");
    gnu << "set title 'Bresenham Line Plot'\n";
    gnu << "set xlabel 'X'\n";
    gnu << "set ylabel 'Y'\n";
    gnu << "set grid\n";
    gnu << "plot 'bres_points.dat' with points pointtype 7 pointsize 1.5 title 'Line'\n";
    gnu << "pause -1\n";  // keep window open
    gnu.close();

    // Run gnuplot
    system("gnuplot plot_bres.plt");

    cout << "Line plotted using gnuplot.\n";

    return 0;
}