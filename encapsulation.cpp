#include <iostream>
using namespace std;
class bill
{
 public:  void showtotal(int i, int q){
        int price[4]={10, 20, 30, 40};
        cout<<"Total Price : Rs."<<price[i-1]*q;cout<<"/-"<<endl;
 }
 public: int showprice(int a){
        int price[4]={10, 20, 30, 40};
        return price[a];
 }
};

int main(){

  bill b;
string food[4]={"Dosa", "Samosa", "Vadapaav", "Chai"};
int item, price, qty;
  
        cout << "Today's Menu: \n";
        for(int c=0; c<=3; c++)
        {
          price=b.showprice(c);
          cout << c+1 << ") " << food[c] <<": Rs."<<price;cout<<"/-"<< endl;
        }
        cout << "Select Item from Above Menu:";
    cin>>item;

  cout << "How many?";
  cin>>qty;

    b.showtotal(item, qty);

}
