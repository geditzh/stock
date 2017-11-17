#include <iostream>
#include "Stock.h"

using namespace std;

int main()
{
    Stock test = Stock("zhanghan",5000,5);
    test.show();
    test.buy(4000,2);
    test.show();
    test.sell(2000,8);
    test.show();
    test.update(100);
    test.show();
    return 0;
}
