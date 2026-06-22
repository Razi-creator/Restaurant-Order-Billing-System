#include <iostream>
using namespace std;

int main()
 {
    int dish, currency;
    float amount,cost,total,salestax;
    const float PKRtoUSD = 0.0036;
    const float PKRtoEuro = 0.0033;

    cout << "\t\tcode\t         Meal       \tPer Kg price in Pakistani rupees" << endl;
    cout << "\n\t\t 01\tChicken Handi\t\t1800 Rs  " << endl;
    cout << "\t\t 02\tChicken Karahi\t\t2000 Rs  " << endl;
    cout << "\t\t 03\tChicken Tikka\t\t2200 Rs " << endl;
    cout << "\t\t 04\tChicken Haleem\t\t500 Rs   " << endl;
    cout << "\t\t 05\tCreamy Chicken\t\t2500 Rs " << endl;

    cout << "Please Enter your choice: ";
    cin >> dish;

    if (dish == 1) 
	{
        cost = 1800;
    } 
	else if (dish == 2)
	{
        cost = 2000;
    } 
	else if (dish == 3) 
	{
       cost = 2200;
    } 
	else if (dish == 4) 
	{
        cost = 500;
    }
	 else if (dish == 5) 
	{
        cost = 2500;
    }
	 else
	{
        cout << "Invalid Choice!" << endl;
    }

    cout << "Enter the quantity: ";
    cin >> amount;

    total= cost * amount;

    if (total >= 1000 && total <= 3000)
	{
        salestax = total * 0.02;
    }
    else if (total > 3000)
	{
        salestax = total * 0.05;
    }

    cout << "Choose your currency (1 for PKR, 2 for USD, 3 for Euro): ";
    cin >> currency;

    if (currency == 1)
	{ 
	    cout << "Total Meal Price in PKR: " << total << endl;
        cout << "Sales Tax in PKR: " << salestax << endl;
        cout << "Total Including Tax in PKR: " << total + salestax << endl;        
    }
	 else if (currency == 2) 
	{ 
        cout << "Total Meal Price in USD: " << total * PKRtoUSD << endl;
        cout << "Sales Tax in USD: " << salestax * PKRtoUSD << endl;
        cout << "Total Including Tax in USD: " << (total+ salestax) * PKRtoUSD << endl;  
    } 
	else if (currency == 3) 
	{ 
        cout << "Total Meal Price in Euro: " << total * PKRtoEuro << endl;
        cout << "Sales Tax in Euro: " << salestax * PKRtoEuro << endl;
        cout << "Total Including Tax in Euro: " << (total + salestax) * PKRtoEuro << endl;
    } 
	else
    {
        cout << "Invalid currency selection!" << endl;
    }

    return 0;
}
