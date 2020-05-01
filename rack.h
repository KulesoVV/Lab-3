#ifndef RACK_H_INCLUDED
#define RACK_H_INCLUDED
#include "furniture.h"
using namespace std;

class rack: public furniture //rack - стеллаж
{
protected:
    string numos;
public:
    rack();
    rack(string name, string size, string color, string material, string numos); //numos- NUMBER OF SECTION (Количество секций)
    void setnumos(string snumos);
    string getnumos() const;
    void print() const override;
    void operator= (rack &b);

};

#endif // RACK_H_INCLUDED
