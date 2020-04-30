#include <iostream>
#include "product.h"
#include "table.h"

using namespace std;

table::table():product(){}
table::table(string name, string size, string color, string cover):product(name, size, color){ }

void table::print() const
{
setlocale(LC_ALL, "Russian");
cout << "Информация о классе table:" << endl;
cout<<"Имя    :  "<<name<<endl;
cout<<"Размер  :  "<<size<<endl;
cout<<"Цвет :  "<<color<<endl<<endl;
}
