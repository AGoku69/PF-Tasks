#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    cin.ignore();
    string productNames[n];
    float prices[n];
    int quantity[n];
    cout << "--- Enter Product Data ---" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "\nProduct #" << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin >> ws, productNames[i]);
        cout << "Price: $";
        cin >> prices[i];
        cout << "Quantity: ";
        cin >> quantity[i];
    }
    cout << "\n--- Final Inventory Report ---" << endl;
    for (int i = 0; i < n; i++) 
    {
        float totalValue = prices[i] * quantity[i];
        
        cout << productNames[i] << ": $" << prices[i] 
             << ", " << quantity[i] << " in stock, "
             << "Total value: $" << totalValue << endl;
    }

}