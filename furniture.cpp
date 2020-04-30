#include <iostream>
#include "product.h"
#include "furniture.h"
using namespace std;

furniture::furniture():product(), material("mat1111"){}
furniture::furniture(string name, string size, string color, string material ):product(name, size, color), material("mat2222")
{
(setmaterial(material));
}
furniture::furniture(const furniture &a)
{
this->material=a.material;
}
void furniture::setmaterial(string smaterial)
{
this->material=smaterial;
}
string furniture::getmaterial() const
{
return material;
}
void furniture::operator=(furniture &g)
{
(setmaterial(g.material));
}
void furniture::print() const
{
setlocale(LC_ALL, "Russian");
cout<<"���������� � ������ furniture:"<<endl;
cout<<"��� : "<<name<<endl;
cout<<"������ : "<<size<<endl;
cout<<"���� : "<<color<<endl;
cout<<"�������� : "<<material<<endl<<endl;
}
