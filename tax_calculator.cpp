#include <iostream>

using namespace std;

int main() {
    // declare variables
    double income, tax = 0, sur_tax = 0, surcharge = 0, final_income_tax = 0;

    // take input
    cout << "Enter the income: ";
    cin >> income;

    // find the income tax
    if (income <= 250000) {
        tax = 0;
    } 
    else if (income <= 500000) 
    {
        tax = (income - 250000) * 0.05;
    } 
    else if (income <= 750000)
    {
        // agee 2,50,000 pe lagega 2,50,000 * 0.05 = 12,500
        // 5,00,000 pe laga 12500
        tax = 12500 + (income - 500000) * 0.1;
    } 
    else if (income <= 1000000)
    {
        // agee 2,50,000 pe lagega 2,50,000 * 0.1 = 25,000
        // 5,00,000 pe laga 12500
        // 7,50,000 pe laga 37500
        tax = 37500 + (income - 750000) * 0.15;
    } 
    else if (income <= 1250000)
    {
        // agee 2,50,000 pe lagega 2,50,000 * 0.15 = 37,500
        // 5,00,000 pe laga 12500
        // 7,50,000 pe laga 37500
        // 10,00,000 pe laga 75000
        tax = 75000 + (income - 1000000) * 0.2;
    } 
    else if (income <= 1500000)
    {
        // agee 2,50,000 pe lagega 2,50,000 * 0.2 = 50,000
        // 5,00,000 pe laga 12,500
        // 7,50,000 pe laga 37,500
        // 10,00,000 pe laga 75,000
        // 12,50,000 pe laga 1,25,000
        tax = 112500 + (income - 1250000) * 0.25;
    } 
    else 
    {
        // agee 2,50,000 pe lagega 2,50,000 * 0.25 = 62,500
        // 5,00,000 pe laga 12,500
        // 7,50,000 pe laga 37,500
        // 10,00,000 pe laga 75,000
        // 12,50,000 pe laga 1,25,000
        // 15,00,000 pe laga 1,87,500
        tax = 187500 + (income - 1500000) * 0.3;
    }

    // display income tax 
    // upto 2 decimal places
    cout.precision(2);
    cout<< fixed<<endl;
    int num = income - 1500000;
    cout << "Amount left to tax over 15,00,000 ("<< income << " - " << 1500000 << ") = "<<num<<endl;
    cout << "Income tax with out cess: " << fixed << tax<<endl;
    
    if (income < 5000000){
        surcharge = 0;
    }
    else if (5000000<income && income<=10000000){
        surcharge = tax * 0.1;
        cout<<"Surcharge is "<<surcharge;
    }
    else if (10000000<income && income<=20000000){
        surcharge = tax * 0.15;
        cout<<"Surcharge is "<<surcharge;
    }
    else if (20000000<income && income<=50000000){
        surcharge = tax * 0.25;
        cout<<"Surcharge is "<<surcharge;
    }
    else if (income > 50000000){
        surcharge = tax * 0.37;
        cout<<"Surcharge is "<<surcharge;
    }
    
    sur_tax = tax + surcharge;
    final_income_tax = sur_tax + (sur_tax * 0.4);
    cout<<endl;
    cout<<"Tax for "<<income<<" with surcharge is "<< sur_tax<<endl;
    cout<<"Cess on surcharge = "<<sur_tax * 0.4<<endl;
    cout<<"Tax for "<<income<<" with cess "<< final_income_tax;
    
    return 0;
}
