#include <iostream>

using namespace std;

double getEarning(double, int);
double getEarning(double, double, double);
double getEarning(int, double);
double getEarning(double, double);
int main()
{
    int sel;

    cout << "Please select..." << endl;
    cout << "1: Manager." << endl;
    cout << "2: Sales Man." << endl;
    cout << "3: Pieces Worker." << endl;
    cout << "4: Hour-Worker." << endl;
    cout << "Others: Quit" << endl;

    cin >> sel;
    switch(sel)
    {
    case 1:
        double salary;
        int absenceDays;
        cin >> salary >> absenceDays;
        cout << getEarning(salary, absenceDays);
        break;
    case 2:
        double baseSalary, saleSum, rate;
        cin >> baseSalary >> saleSum >> rate;
        cout << getEarning(baseSalary, saleSum, rate);
        break;
    case 3:
        int workPieces;
        double wagePerPiece;
        cin >> workPieces >> wagePerPiece;
        cout << getEarning(workPieces, wagePerPiece);
        break;
    case 4:
        double hours, wagePerHour;
        cin >> hours >> wagePerHour;
        cout << getEarning(hours, wagePerHour);
        break;
    default:
        break;
    }
    return 0;
}

double getEarning(double _salary, int _absenceDays)
{
    return _salary - _absenceDays * _salary / 22.;
}

double getEarning(double _baseSalary, double _salesSum, double _rate)
{
    return _baseSalary + _salesSum * _rate;
}

double getEarning(int _workPieces, double _wagePerPiece)
{
    return _workPieces * _wagePerPiece;
}

double getEarning(double _hours, double _wagePerHour)
{
    return _hours * _wagePerHour;
}
