#include <iostream>
#include "wardrobe.h" //wardrobe - ����
#include "furniture.h"

using namespace std;

wardrobe::wardrobe():furniture(), numosh("six"){} //numosh- NUMBER OF SHELVES (���������� �����)
wardrobe::wardrobe(string name, string size, string color, string material, string numosh):furniture(name, size, color, material), numosh("nine")
{
    (setnumosh(numosh));
}
void wardrobe::setnumosh(string snumosh)
{
    this->numosh=snumosh;
}
string wardrobe::getnumosh() const
{
    return numosh;
}
void wardrobe::operator= (wardrobe &s)
{
    (setnumosh(s.numosh));
}
void wardrobe::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"���������� � ������ wardrobe:"<<endl;
    cout<<"���    :  "<<name<<endl;
    cout<<"������  :  "<<size<<endl;
    cout<<"���� :  "<<color<<endl;
    cout<<"�������� : "<<material<<endl;
    cout<<"���-�� �����      :  "<<numosh<<endl<<endl;
  }
