#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, y, xp, xk, dx, R;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << setw(6) << "x" << " | " << setw(10) << "y" << endl;
    cout << "---------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x >= -R && x <= -1) {
            y = sqrt(R * R - pow(x + R, 2));
        }
        else if (x > -1 && x <= 0) {
            y = R;
        }
        else if (x > 0 && x <= 2) {
            y = -x / 2 + R;
        }
        else if (x > 2) {
            y = x - 4;
        }

        cout << setw(6) << setprecision(2) << x << " | " << setw(10) << setprecision(3) << y << endl;

        x += dx;
    }

    cout << "---------------------------------" << endl;

    return 0;
}
