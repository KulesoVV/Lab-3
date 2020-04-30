#ifndef SOFA_H_INCLUDED
#define SOFA_H_INCLUDED
#include "product.h"
using namespace std;

class sofa: public product
{
protected:
string cover;
public:
sofa();
sofa(string name, string size, string color, string cover);
void setcover(string scover);
string getcover() const;
void print() const override;
void operator= (sofa &l);

};


#endif // SOFA_H_INCLUDED
