#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int c=0;
    float inr=0;
    cout<<"Enter the amount in INR: "<<endl;
    cin>>inr;

    string ruble, yen, usd, euro, dirham, yuan;

    cout<<"Enter 1 for converting to Ruble"<<endl;
    cout<<"Enter 2 for converting to USD"<<endl;
    cout<<"Enter 3 for converting to Yen"<<endl;
    cout<<"Enter 4 for converting to Euro"<<endl;
    cout<<"Enter 5 for converting to Dirham"<<endl;
    cout<<"Enter 6 for converting to Yuan"<<endl;
    cin>>c;

    switch(c){
        case 1:
        cout<<"Converted Value:"<<0.7388*inr;
        break;

        case 2:
        cout<<"Converted Value:"<<0.0126*inr;
        break;

        case 3:
        cout<<"Converted Value:"<<1.72*inr;
        break;

        case 4:
        cout<<"Converted Value:"<<0.0125*inr;
        break;

        case 5:
        cout<<"Converted Value:"<<0.0461*inr;
        break;

        case 6:
        cout<<"Converted Value:"<<0.0846*inr;
        break;

        default:
        cout<<"Invalid Input!";
        break;
    }
}