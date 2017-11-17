#ifndef _STOCK_H
#define _STOCK_H

using namespace std;

class Stock
{
private:
    string company;
    int share;
    double share_value;
    double totoal_value;
    void calc()
    {
        totoal_value = share * share_value;
    }
public:
    Stock();
    Stock(const string &co,int num = 0,double value = 0);
    ~Stock();
    void buy(int num,double value);
    void sell(int num,double value);
    void update(double value);
    void show();
};
#endif
