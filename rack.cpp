#include <iostream>
#include "rack.h" //rack - �������
#include "furniture.h"
using namespace std;

rack::rack():furniture(), numos("seven"){} //numos- NUMBER OF SECTION (���������� ������)
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
    cout<<"���������� � ������ rack:"<<endl;
    cout<<"���   :  "<<name<<endl;
    cout<<"������  :  "<<size<<endl;
    cout<<"���� :  "<<color<<endl;
    cout<<"�������� : "<<material<<endl;
    cout<<"���-�� ������ :  "<<numos<<endl<<endl;
  }
