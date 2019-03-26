#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    
double Pay;
double Hours;
double GrossIncome;
double NetIncome;
double Clothes;
double School;
double Bonds;
double ParentsBonds;

const double Tax = 0.14;
const double Clothes_Other_Accessories = 0.10;
const double School_Supplies = 0.01;
const double Savings_Bonds = 0.25;
const double Parents_Additional_Bonds = 0.50;
    
cout << "Number of hours you work each week: ";
cin >> Hours;
cout << "Your hourly rate: ";
cin >> Pay;
    
GrossIncome = Hours * Pay;
NetIncome = GrossIncome *= Tax;
Clothes = NetIncome * Clothes_Other_Accessories;
School = NetIncome * School_Supplies;
NetIncome -= (Clothes + School); 
Bonds = NetIncome * Savings_Bonds;
ParentsBonds = Bonds * Parents_Additional_Bonds;
    
cout << "Your income before taxes from you summer job: " << GrossIncome << endl;
cout << "Your income after taxes from your summer job: " << NetIncome << endl;
cout << "The money you spend on clothes and other accessories: " << Clothes << endl;
cout << "The money you spend on school supplies: " << School << endl;
cout << "The money you spend to buy savings bonds: " << Bonds << endl;
cout << "The money your parents spend to buy additional savings bonds for you: " <<ParentsBonds << endl;
    
_getch();
return 0;
}
