#include <iostream>
#include <stdlib.h>

using namespace std;

void header();
void options();
void domestic();
void religious();
void industrial();
void general();
void hotel();
void rate();
void rateoptions();
void domesticrates();
void religiousrates();
void industrialrates();
void generalrates();
void hotelrates();

int x,y,unit;
float charge;

int main()
{
    system("Color 1E");
    header();

    do
    {
        options();

        switch(x)
        {
        case 1:
            domestic();
            break;

        case 2:
            religious();
            break;

        case 3:
            industrial();
            break;

        case 4:
            general();
            break;

        case 5:
            hotel();
            break;

        case 7:
            cout <<"\nExit\n";
            break;

        default :
            cout << "\nInvalid option. Please try again...\n\n";
            break;

        case 6:
            rate();

        }

    }
    while(x!=7);

    return 0;
}

void header()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(203)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<"\t\t\t\t"<<char(176)<<char(176)<<char(177)<<char(177)<<char(178)<<char(178)<<char(219)<<char(219)<<" Electricity Bill Calculator ";
    cout <<char(219)<<char(219)<<char(178)<<char(178)<<char(177)<<char(177)<<char(176)<<char(176);
    cout << "\t\t\t\t"<<char(186)<<"COM.SC/17/001"<<char(186)<<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(202)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl<<endl;
}

void options()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<" **Please select your option** "<<char(179)<<endl;
    cout <<char(195)<<char(196)<<char(196)<<char(196)<<char(194)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(180)<<endl;
    cout <<char(179)<< "[1]"<<char(179)<<"Domestic Purpose\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[2]"<<char(179)<<"Religious Purpose\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[3]"<<char(179)<<"Industrial Purpose\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[4]"<<char(179)<<"General Purpose\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[5]"<<char(179)<<"Hotel Purpose\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[6]"<<char(179)<<"Rates\t\t\t"<<char(179)<<endl;
    cout <<char(179)<< "[7]"<<char(179)<<"Exit\t\t\t"<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(193)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;

    cout <<char(255)<<char(254)<<char(255)<<"Enter your selection :";
    cin >> x;
}

void domestic()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<char(233)<<"  Domestic Purpose Tariff\t" <<char(186)<< "\tNOTE : Billing Period is 31 days" <<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

    cout <<char(254)<<char(255)<< "Enter the number of units consumed :";
    cin >> unit;

    if (unit<=62)
        charge = unit*7.85;
    if (unit>62 && unit<=93)
        charge = (unit-62)*10 + (62*7.85);
    if (unit>93 && unit<=124)
        charge = (unit-93)*27.75 + (62*7.85) + (31*10);
    if (unit>124 && unit<=186)
        charge = (unit-124)*32 + (62*7.85) + (31*10) + (31*27.75);
    if (unit>186)
        charge = (unit-186)*45 + (62*7.85) + (31*10) + (31*27.75) + (62*32) + 540;

    cout << "\nThe number of units consumed are :";
    cout <<"\t"<<unit<< endl;
    cout << "TOTAL CHARGE for this month is   :";
    cout <<"\t"<<charge<<" LKR"<<endl<<endl;
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl<<endl;
}


void religious()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<char(233)<<"  Religious Purpose Tariff\t" <<char(186)<< "\tNOTE : Billing Period is 28 days." <<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

    cout <<char(254)<<char(255)<< "Enter the number of units consumed :";
    cin >> unit;

    if (unit<=28)
        charge = unit*1.90;
    if (unit>28 && unit<=84)
        charge = (unit-28)*2.80 + (28*1.90);
    if (unit>84 && unit<=112)
        charge = (unit-84)*6.75 + (28*1.90) + (56*2.80);
    if (unit>112 && unit<=168)
        charge = (unit-112)*7.50 + (28*1.90) + (56*2.80) + (28*6.75);
    if (unit>168)
        charge = (unit-168)*9.40 + (28*1.90) + (56*2.80) + (28*6.75) + (56*7.50) +240;

    cout << "\nThe number of units consumed are :";
    cout <<"\t"<<unit<< endl;
    cout << "TOTAL CHARGE for this month is   :";
    cout <<"\t"<<charge<<" LKR"<<endl<<endl;
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl<<endl;
}

void industrial()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<char(233)<<"  Industrial Purpose Tariff\t" <<char(186)<<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

    cout <<char(254)<<char(255)<< "Enter the number of units consumed :";
    cin >> unit;

    if (unit<=300)
        charge = unit*10.80 + 600;
    else
        charge = unit*12.20 + 600;

    cout << "\nThe number of units consumed are :";
    cout <<"\t"<<unit<< endl;
    cout << "TOTAL CHARGE for this month is   :";
    cout <<"\t"<<charge<<" LKR"<<endl<<endl;
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl<<endl;
}

void general()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<char(233)<<"  General Purpose Tariff\t" <<char(186)<<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

    cout <<char(254)<<char(255)<< "Enter the number of units consumed :";
    cin >> unit;

    if (unit<=300)
        charge = unit*18.30 + 240;
    else
        charge = unit*22.85 + 240;

    cout << "\nThe number of units consumed are :";
    cout <<"\t"<<unit<< endl;
    cout << "TOTAL CHARGE for this month is   :";
    cout <<"\t"<<charge<<" LKR"<<endl<<endl;
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl<<endl;
}

void hotel()
{
    cout <<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187)<<endl;
    cout <<char(186)<<char(233)<<"  Hotel Purpose Tariff\t" <<char(186)<<endl;
    cout <<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205);
    cout <<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

    cout <<char(254)<<char(255)<< "Enter the number of units consumed :";
    cin >> unit;

    charge = unit*21.50 + 600;

    cout << "\nThe number of units consumed are :";
    cout <<"\t"<<unit<< endl;
    cout << "TOTAL CHARGE for this month is   :";
    cout <<"\t"<<charge<<" LKR"<<endl<<endl;
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl<<endl;
}

void rate()
{
    do
    {
        rateoptions();

        switch(y)
        {
        case 1:
            domesticrates();
            break;

        case 2:
            religiousrates();
            break;

        case 3:
            industrialrates();
            break;

        case 4:
            generalrates();
            break;

        case 5:
            hotelrates();
            break;

        case 6:
            cout << "\nMain menu\n\n";
            break;

        default :
            cout << "\nInvalid option. Please try again...\n\n";
            break;
        }
    }
    while(y!=6);
}

void rateoptions()
{
    cout << "\n\t**Please select the type of rate\n\n";
    cout << "\t1.Domestic\n\t2.Religious\n\t3.Industrial\n\t4.General\n\t5.Hotel\n\t6.Back to Main menu\n\n";
    cout << "Enter your selection :";
    cin >> y;
}

void domesticrates()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<" DOMESTIC Purpose charge rates "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl<<endl;

    cout <<char(255)<<char(175)<<char(255)<< "The charge for first 62 units (up to 62 units) = 7.85 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 31 units (up to 93 units)  = 10.00 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 31 units (up to 124 units) = 27.75 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 62 units (up to 186 units) = 32.00 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for the remaining above 186 units   = 45.00 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "Fixed charge (above 186 units)                 = 540 LKR\n";
    cout <<"-------------------------------------------------------------------------\n";
}

void religiousrates()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<"RELIGIOUS Purpose charge rates "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl<<endl;

    cout <<char(255)<<char(175)<<char(255)<< "The charge for first 28 units(up to 28 units)  = 1.90 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 56 units (up to 84 units)  = 2.80 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 28 units (up to 112 units) = 6.75 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for next 56 units (up to 168 units) = 7.50 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge for remaining above 168 units       = 9.40 LKR per unit\n";
    cout <<char(255)<<char(175)<<char(255)<< "Fixed charge (above 168 units)                 = 240 LKR\n";
    cout <<"-------------------------------------------------------------------------\n";
}

void industrialrates()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<"INDUSTRIAL Purpose charge rates "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl<<endl;

    cout <<char(255)<<char(175)<<char(255)<< "The charge if the consumed units are lower than 300   = 10.80 LKR per unit + Fixed charge 600 LKR\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge if the consumed units are higher than 300  = 12.20 LKR per unit + Fixed charge 600 LKR\n";
    cout <<"-------------------------------------------------------------------------\n";
}

void generalrates()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<" GENERAL Purpose charge rates "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl<<endl;

    cout <<char(255)<<char(175)<<char(255)<< "The charge if the consumed units are lower than 300   = 18.30 LKR per unit + Fixed charge 240 LKR\n";
    cout <<char(255)<<char(175)<<char(255)<< "The charge if the consumed units are higher than 300  = 22.85 LKR per unit + Fixed charge 240 LKR\n";
    cout <<"-------------------------------------------------------------------------\n";
}

void hotelrates()
{
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<" HOTEL Purpose charge rates "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196);
    cout <<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl<<endl;

    cout <<char(255)<<char(175)<<char(255)<< "The charge for a unit  = 21.50 LKR + Fixed charge 600 LKR\n";
    cout <<"-------------------------------------------------------------------------\n";

}
