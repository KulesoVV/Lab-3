#include <iostream>
#include "wardrobe.h" //wardrobe - шкаф
#include "furniture.h"

using namespace std;

wardrobe::wardrobe():furniture(), numosh("six"){} //numosh- NUMBER OF SHELVES (Количество полок)
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
    cout<<"Информация о классе wardrobe:"<<endl;
    cout<<"Имя    :  "<<name<<endl;
    cout<<"Размер  :  "<<size<<endl;
    cout<<"Цвет :  "<<color<<endl;
    cout<<"Материал : "<<material<<endl;
    cout<<"Кол-во полок      :  "<<numosh<<endl<<endl;
  }
