#include <iostream>
#include "product.h"
#include "table.h"

using namespace std;

table::table():product(){}
table::table(string name, string size, string color, string cover):product(name, size, color){ }

void table::print() const
{
setlocale(LC_ALL, "Russian");
cout << "���������� � ������ table:" << endl;
cout<<"���    :  "<<name<<endl;
cout<<"������  :  "<<size<<endl;
cout<<"���� :  "<<color<<endl<<endl;
}
