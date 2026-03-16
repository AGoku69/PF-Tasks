#include <iostream>
using namespace std;
main()
{
    int n, num;
    int p1=0, p2=0, p3=0, p4=0, p5=0;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        if(num < 200)
            p1++;
        else if(num >= 200 && num <= 399)
            p2++;
        else if(num >= 400 && num <= 599)
            p3++;
        else if(num >= 600 && num <= 799)
            p4++;
        else if(num >= 800 && num <= 1000)
            p5++;
    }
    cout << (p1 * 100.0 / n) << "%" << endl;
    cout << (p2 * 100.0 / n) << "%" << endl;
    cout << (p3 * 100.0 / n) << "%" << endl;
    cout << (p4 * 100.0 / n) << "%" << endl;
    cout << (p5 * 100.0 / n) << "%" << endl;
}