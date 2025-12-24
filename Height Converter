//Convertes Centimeters to feet and Vice Versa...

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double height;
    char Units;

    cout<<"*******************Height Converter********************\n";
    cout<<"C=Centermeters\nF=Feet\n\n";

    cout<<"What do want to convert into : ";
    cin>>Units;


    switch(Units){

        case 'C':
        case 'c':
            cout<<"Enter your Feet Value : ";
            cin>>height;

            height=30*height;
            cout<<"Your Height in Centemeters is : "<<fixed<<setprecision(1)<<height<<"cm\n";
            break;

        case 'F': 
        case 'f':
            cout<<"Enter your Centermeter Value : ";
            cin>>height;

            height=height/30;
            cout<<"Your Height in Feet is : "<<fixed<<setprecision(1)<<height<<"ft \n";
            break;

        default:
            cout<<"Bitch Enter only F or C.. ";
            break;   
    }
}
