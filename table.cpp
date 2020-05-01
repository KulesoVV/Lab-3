#include <iostream>
#include "furniture.h"
#include "table.h"

using namespace std;

table::table():furniture(){}
table::table(string name, string size, string color, string material):furniture(name, size, color, material){ }

void table::print() const
{
setlocale(LC_ALL, "Russian");
cout << "���������� � ������ table:" << endl;
cout<<"���    :  "<<name<<endl;
cout<<"������  :  "<<size<<endl;
cout<<"�������� : "<<material<<endl;
cout<<"���� :  "<<color<<endl<<endl;
}
