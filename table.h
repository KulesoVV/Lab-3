#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED
#include "furniture.h"
using namespace std;

class table: public furniture
{
public:
table();
table (string name, string size, string color, string material);
void print() const;
};





#endif // TABLE_H_INCLUDED
