#include <iostream>
#include "rack.h"
#include "product.h"
using namespace std;

rack::rack():product(), numos("seven"){}
rack::rack(string name, string size, string color, string numos):product(name, size, color),numos("five")
{
    (setnumos(numos));
}
void rack::setnumos(string snumos)
{
    this->numos=snumos;
}
string rack::getnumos() const
{
    return numos;
}
void rack::operator= (rack &i)
{
    (setnumos(i.numos));
}
void rack::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"���������� � ������ rack:"<<endl;
    cout<<"���   :  "<<name<<endl;
    cout<<"������  :  "<<size<<endl;
    cout<<"���� :  "<<color<<endl;
    cout<<"���-�� ������ :  "<<numos<<endl<<endl;
  }
