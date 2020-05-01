#ifndef WARDROBE_H_INCLUDED
#define WARDROBE_H_INCLUDED
#include "furniture.h"

using namespace std;

class wardrobe : public furniture //wardrobe - шкаф
{
protected:
    string numosh;
public:
  wardrobe();
  wardrobe(string name,string size,string color, string material,string numosh); //numosh- NUMBER OF SHELVES (Количество полок)
  void setnumosh(string snumosh);
  string getnumosh () const;
  void print() const override;
void operator= (wardrobe &s);
};


#endif // WARDROBE_H_INCLUDED
