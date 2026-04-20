#include <iostream>
using namespace std;
void solveQuadratic(float a, float b, float c) {
    float D = b*b - 4*a*c;
    // Function-less sqrt approximation
    float sqrtD = 0;
    float i = 0;
    if (D >= 0) 
    {
        while (i * i <= D) {
            i += 0.001;
        }
        sqrtD = i;
    }
    else if (D > 0) 
    {
        float x1 = (-b + sqrtD) / (2*a);
        float x2 = (-b - sqrtD) / (2*a);
        cout << "Two real and distinct roots:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) 
    {
        float x = (-b) / (2*a);
        cout << "One real root:\n";
        cout << "x = " << x << endl;
    }
    else 
    {
        // For complex roots
        float realPart = (-b) / (2*a);
        // sqrt of negative part
        float temp = -D;
        float j = 0;
        while (j * j <= temp) 
        {
            j += 0.001;
        }
        float imagPart = j / (2*a);
        cout << "Complex roots:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}
main() 
{
    float a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    solveQuadratic(a, b, c);
}