#ifndef RACK_H_INCLUDED
#define RACK_H_INCLUDED
#include "product.h"
using namespace std;

class rack: public product
{
protected:
    string numos;
public:
    rack();
    rack(string name, string size, string color, string numos);
    void setnumos(string snumos);
    string getnumos() const;
    void print() const override;
    void operator= (rack &b);

};

#endif // RACK_H_INCLUDED
