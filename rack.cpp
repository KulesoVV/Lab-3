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
    cout<<"Информация о классе rack:"<<endl;
    cout<<"Имя   :  "<<name<<endl;
    cout<<"Размер  :  "<<size<<endl;
    cout<<"Цвет :  "<<color<<endl;
    cout<<"Кол-во секций :  "<<numos<<endl<<endl;
  }
