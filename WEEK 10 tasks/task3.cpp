#include<iostream>
using namespace std;
float taxCalculator(char type, float price)
{
    float taxRate = 0;
    if (type == 'M')
        taxRate = 6;
    else if (type == 'E')
        taxRate = 8;
    else if (type == 'S')
        taxRate = 10;
    else if (type == 'V')
        taxRate = 12;
    else if (type == 'T')
        taxRate = 15;
    float taxAmount = price * (taxRate / 100);
    float finalPrice = price + taxAmount;
    return finalPrice;
}
int main()
{
    char type;
    float price;
    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    float finalPrice = taxCalculator(type, price);
    // Get vehicle type name for display
    string typeName;
    if (type == 'M') typeName = "Motorcycle";
    else if (type == 'E') typeName = "Electric";
    else if (type == 'S') typeName = "Sedan";
    else if (type == 'V') typeName = "Van";
    else if (type == 'T') typeName = "Truck";
    cout << "The final price on a vehicle of type " << typeName
         << " after adding the tax is $" << finalPrice << endl;

}