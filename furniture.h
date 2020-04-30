#ifndef FURNITURE_H_INCLUDED
#define FURNITURE_H_INCLUDED
#include "product.h"

using namespace std;

class furniture : public product
{
protected:
string material;
public:
furniture();
furniture(string name,string size,string color, string material);
furniture(const furniture &a);
void setmaterial (string material);
string getmaterial () const;
void print() const override;
void operator= (furniture &g);
};


#endif // FURNITURE_H_INCLUDED
