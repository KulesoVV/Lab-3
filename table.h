#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED
#include "product.h"
using namespace std;

class table: public product
{
public:
table();
table (string name, string size, string color, string cover);
void print() const;
};



#endif // TABLE_H_INCLUDED
