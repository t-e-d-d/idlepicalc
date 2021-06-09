#include <iostream>
#include <iomanip>
#include <cmath>

double fac(double num) {
    double result = 1.0;
    for (double i=2.0; i<num; i++)
       result *= i;
    return result;
}

int main() {
    using namespace std;
    double pi=0.0;
    for (double k = 0.0; k < 10.0; k++) {
        pi += (pow(-1.0,k) * fac(6.0 * k) * (13591409.0 + (545140134.0 * k))) 
            / (fac(3.0 * k) * pow(fac(k), 3.0) * pow(640320.0, 3.0 * k + 3.0/2.0));
    }
    pi *= 12.0;
    cout << setprecision(15) << 1.0 / pi << endl;
    return 0;
}
