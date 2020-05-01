#include <iostream>
#include "furniture.h"
#include "table.h"

using namespace std;

table::table():furniture(){}
table::table(string name, string size, string color, string material):furniture(name, size, color, material){ }

void table::print() const
{
setlocale(LC_ALL, "Russian");
cout << "Информация о классе table:" << endl;
cout<<"Имя    :  "<<name<<endl;
cout<<"Размер  :  "<<size<<endl;
cout<<"Материал : "<<material<<endl;
cout<<"Цвет :  "<<color<<endl<<endl;
}
