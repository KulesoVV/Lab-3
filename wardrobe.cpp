#include <iostream>
#include "wardrobe.h"
#include "product.h"

using namespace std;

wardrobe::wardrobe():product(), numosh("six"){}
wardrobe::wardrobe(string name, string size, string color, string numosh):product(name, size, color), numosh("nine")
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
    cout<<"���-�� �����      :  "<<numosh<<endl<<endl;
  }
