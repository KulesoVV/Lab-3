#include <iostream>
#include "rack.h" //rack - стеллаж
#include "furniture.h"
using namespace std;

rack::rack():furniture(), numos("seven"){} //numos- NUMBER OF SECTION (Количество секций)
rack::rack(string name, string size, string color, string material, string numos):furniture(name, size, color, material),numos("five")
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
    cout<<"Материал : "<<material<<endl;
    cout<<"Кол-во секций :  "<<numos<<endl<<endl;
  }
