#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

using namespace std;

class product
{
protected:
string name;
string size;
string color;
public:
product();
product(string name, string size, string color);
product(const product &a);
void setname(string sname);
void setsize(string ssize);
void setcolor (string scolor);
string getname()const;
string getsize() const;
string getcolor() const;
virtual void print() const = 0;
void operator= (product &m);

};


#endif // PRODUCT_H_INCLUDED
