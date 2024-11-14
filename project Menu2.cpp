#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

    int order,deals;

    cout<<"-----------------------MENU-----------------------"<<endl;
    cout<<""<<endl;
    cout<<"(1)  Chicken Biryani"<<setw(24)<<"$2 only."<<endl;
    cout<<"(2)  Chicken Palao"<<setw(26)<<"$1.5 only."<<endl;
    cout<<"(3)  Chinese Rice"<<setw(27)<<"$2.5 only."<<endl;
    cout<<"(4)  Chicken Burger"<<setw(25)<<"$1 only."<<endl;
    cout<<"(5)  Nawabi Pizza"<<setw(27)<<"$4.5 only."<<endl;
    cout<<"(6)  2.5 Litre Coke"<<setw(25)<<"$1.75 only."<<endl;
    cout<<""<<endl;

    cout<<"Please select the order number: ";
    cin>>order;
    cout<<"Please enter the number of deals: ";
    cin>>deals;
    cout<<""<<endl;


    if (order==1){
        cout<<"Order : Chicken Biryani."<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $2 only."<<endl;
        cout<<"Total price: $"<<deals*2<<" only."<<endl;
    }

    else if (order==2){
        cout<<"Order : Chicken Palao"<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $1.5 only."<<endl;
        cout<<"Total price: $"<<deals*1.5<<" only."<<endl;
    }

    else if (order==3){
        cout<<"Order : Chinese Rice."<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $2.5 only."<<endl;
        cout<<"Total price: $"<<deals*2.5<<" only."<<endl;
    }

     else if (order==4){
        cout<<"Order : Chicken Burger."<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $1 only."<<endl;
        cout<<"Total price: $"<<deals*1<<" only."<<endl;
    }

     else if (order==5){
         cout<<"Order : Nawabi Pizza"<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $4.5 only."<<endl;
        cout<<"Total price: $"<<deals*4.5<<" only."<<endl;
    }

     else if (order==6){
         cout<<"Order : 2.5 Litre Coke."<<endl;
        cout<<"Number of deals : "<<deals<<endl;
        cout<<"Price of each deal: $1.75 only."<<endl;
        cout<<"Total price: $"<<deals*1.75<<" only."<<endl;
    }

    cout<<""<<endl;
    cout<<"---------THANK YOU FOR COMING---------"<<endl;
    cout<<""<<endl;



}
