#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

int main()
{
    Birthday birthObj(12,28,1986);

    People buckyroberts("Bucky the King", birthObj);

    buckyroberts.printInfo();
}
