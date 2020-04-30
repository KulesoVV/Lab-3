#include <iostream>
#include "sofa.h"
#include "product.h"
using namespace std;

sofa::sofa():product(), cover("oak"){}
sofa::sofa(string name, string size, string color, string numos):product(name, size, color),cover("veneer")
{
(setcover(cover));
}
void sofa::setcover(string scover)
{
this->cover=scover;
}
string sofa::getcover() const
{
return cover;
}
void sofa::operator= (sofa &o)
{
(setcover(o.cover));
}
void sofa::print() const
{
setlocale(LC_ALL, "Russian");
    cout<<"Информация о классе sofa:"<<endl;
    cout<<"Имя    :  "<<name<<endl;
    cout<<"Размер  :  "<<size<<endl;
    cout<<"Цвет :  "<<color<<endl;
    cout<<"Покрытие :  "<<cover<<endl<<endl;
}
