#include <iostream>
#include "product.h"
#include "furniture.h"
#include "wardrobe.h"
#include "rack.h"
#include "sofa.h"
#include "table.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    wardrobe b;
    b.setname("Tango");
    b.setsize("quatro");
    b.setcolor("white");
    b.setmaterial("mat");
    b.setnumosh("seven");
    b.print();

    rack c;
    c.setname("mimico");
    c.setsize("big");
    c.setcolor("yellow");
    c.setmaterial("mat");
    c.setnumos("five");
    c.print();

    sofa d;
    d.setname("jazz");
    d.setsize("enhanced");
    d.setcolor("grey");
    d.setmaterial("mat");
    d.setcover("oak");
    d.print();

    table e;
    e.setname("lack");
    e.setsize("normal");
    e.setcolor("brown");
    e.setmaterial("mat");
    e.print();

    return 0;
}
