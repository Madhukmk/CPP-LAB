#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    float d = b*b - 4*a*c;
    float r1, r2;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << r1 << endl;
    }
    else {
        float realPart = -b / (2*a);
        float imagPart = sqrt(-d) / (2*a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
