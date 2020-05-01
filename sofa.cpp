#include <iostream>
#include "sofa.h" //sofa - �����
#include "furniture.h"
using namespace std;

sofa::sofa():furniture(), cover("oak"){} //cover - ��������
sofa::sofa(string name, string size, string color, string material, string numos):furniture(name, size, color, material),cover("veneer")
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
    cout<<"���������� � ������ sofa:"<<endl;
    cout<<"���    :  "<<name<<endl;
    cout<<"������  :  "<<size<<endl;
    cout<<"���� :  "<<color<<endl;
    cout<<"�������� : "<<material<<endl;
    cout<<"�������� :  "<<cover<<endl<<endl;
}
