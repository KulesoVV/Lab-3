#ifndef SOFA_H_INCLUDED
#define SOFA_H_INCLUDED
#include "furniture.h"
using namespace std;

class sofa: public furniture //sofa - диван
{
protected:
string cover;
public:
sofa();
sofa(string name, string size, string color, string material, string cover); //cover - Покрытие
void setcover(string scover);
string getcover() const;
void print() const override;
void operator= (sofa &l);

};


#endif // SOFA_H_INCLUDED
