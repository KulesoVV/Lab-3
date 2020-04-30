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
    cout<<"Информация о классе wardrobe:"<<endl;
    cout<<"Имя    :  "<<name<<endl;
    cout<<"Размер  :  "<<size<<endl;
    cout<<"Цвет :  "<<color<<endl;
    cout<<"Кол-во полок      :  "<<numosh<<endl<<endl;
  }
