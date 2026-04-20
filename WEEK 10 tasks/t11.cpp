#include <iostream>
using namespace std;
string calculatePoolState(int V, int P1, int P2, double H) {
    double totalWater = (P1 + P2) * H;
    if (totalWater <= V) 
    {
        double poolPercent = (totalWater / V) * 100;
        double pipe1Percent = ((P1 * H) / totalWater) * 100;
        double pipe2Percent = ((P2 * H) / totalWater) * 100;

        // Convert to integers (no rounding)
        int pool = poolPercent;
        int p1 = pipe1Percent;
        int p2 = pipe2Percent;
        return "The pool is " + to_string(pool) +
               "% full. Pipe 1: " + to_string(p1) +
               "%. Pipe 2: " + to_string(p2) + "%.";
    }
    else 
    {
        double overflow = totalWater - V;

        return "For " + to_string(H) +
               " hours the pool overflows with " +
               to_string(overflow) + " liters.";
    }
}
main() 
{
    int V, P1, P2;
    double H;
    cout << "Enter pool volume (V): ";
    cin >> V;
    cout << "Enter flow rate of Pipe 1 (P1): ";
    cin >> P1;
    cout << "Enter flow rate of Pipe 2 (P2): ";
    cin >> P2;
    cout << "Enter hours (H): ";
    cin >> H;
    cout << calculatePoolState(V, P1, P2, H) << endl;

}