/*
Problem Statement : A class representing distance is measured in the unit of feet and inches. Write a
program to do conversion from meter unit to objects of class type and objects of class type
to meter.
*/

/*******************************************************************************
Title    : Type conversion base to class
Author   : Deepak M S 
Date     : 
*******************************************************************************/

#include <iostream>


using std::cin;
using std::cout;
using std::endl;

class Measures
{
private:
    int feet;
    double inch;

public:
    // defult constructor
    Measures();

    operator double();
    void operator=(double);

    void setData();

    void display()
    {
        cout << "Measure ment =" << feet << "+" << inch << endl;
    }
};

// function definitions
Measures::Measures()
{
    feet = 0;
    inch = 0;
}

Measures::operator double()
{
    double m = feet * 0.30408 + inch * 0.0254;
    return m;
}
void Measures::operator=(double meter)
{
    
    
    double totalIn =(100 * meter)/2.54;
    
    feet = (int) totalIn/12;
    
    inch = totalIn - 12 * feet;
}

void Measures::setData()
{
    cout << "Enter measurement in feet : ";
    cin >> feet;
    cout << "Enter measurement in inch : ";
    cin >> inch;
}

int main()
{
    Measures m1;
    Measures m2;
    int option, choice;
    double meter;

    do
    {
        cout << "SELECT A OPTION" << endl;
        cout << " 1.Covert meter to feet+inch \n 2.Convert feet+inch to meter" << endl;
        cout << "Enter here:";
        cin >> option;
        switch (option)
        {
        case 1:

            cout << "Enter measurement in meter:";
            cin >> meter;

            m1 = meter;

            m1.display();
            break;
        case 2:
            m2.setData();
            meter = (double) m2;

            cout << "Measurement in meter = " << meter << endl;
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
        cout << "Do you want to continue? if yes enter 1 here : ";
        cin >> choice;
    } while (choice == 1);

    return 0;
}