#ifndef WARDROBE_H_INCLUDED
#define WARDROBE_H_INCLUDED
#include "product.h"

using namespace std;

class wardrobe : public product
{
protected:
    string numosh;
public:
  wardrobe();
  wardrobe(string name,string size,string color,string numosh);
  void setnumosh(string snumosh);
  string getnumosh () const;
  void print() const override;
void operator= (wardrobe &s);
};


#endif // WARDROBE_H_INCLUDED
