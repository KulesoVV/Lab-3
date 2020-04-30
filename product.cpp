#include <iostream>
#include "product.h"
using namespace std;

product::product()
{
name = "limbo";
size= "small";
color = "black";
}
product::product(string name, string size, string color):product()
{
setname(name);
setsize(size);
setcolor(color);
}
product::product(const product &a)
{
this-> name = a.name;
this-> size= a.size;
this-> color = a.color;
}
void product::setname(string sname)
{
this->name=sname;
}
void product::setsize(string ssize)
{
this->size=ssize;
}
void product::setcolor(string scolor)
{
this->color=scolor;
}
string product::getname() const
{
return name;
}
string product::getsize() const
{
return size;
}
string product::getcolor() const
{
return color;
}
void product::operator=(product &m)
{
setname(m.name);
setsize(m.size);
setcolor(m.color);
}
