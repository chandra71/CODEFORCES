#include <iostream>
#include <iomanip>  // FOR SETPRECISION

using namespace std;

int main() {
    // DEFINE THE CONSTANT VALUE OF PI
    const double PI = 3.141592653;

    // DECLARE VARIABLE TO HOLD THE RADIUS
    double R;

    // INPUT THE RADIUS
    cin >> R;

    // CALCULATE THE AREA OF THE CIRCLE USING THE FORMULA: AREA = PI * R^2
    double area = PI * R * R;

    // OUTPUT THE AREA WITH 9 DIGITS AFTER THE DECIMAL POINT
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
