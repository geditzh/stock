#include <iostream>
#include "Stock.h"

using namespace std;

Stock::Stock()
{
    cout << "default" << endl;
    company = "no name";
    share = 0;
    share_value = 0;
    totoal_value = 0;
}

Stock::Stock(const string &co,int num,double value)
{
    company = co;
    if (num<0)
    cout << "this is invalid" << endl;
    else
    share = num;
    share_value = value;
    calc();
}

Stock::~Stock()
{
    cout << "bye"<< company << endl;
}

void Stock::buy(int num,double value)
{
    share += num;
    share_value = value;
    calc();
}

void Stock::sell(int num,double value)
{
    share -= num;
    share_value = value;
    calc();
}

void Stock::update(double value)
{
    share_value = value;
    calc();
}

void Stock::show()
{
    cout << "company name:" << company << endl;
    cout << "share number:" << share << endl;
    cout << "share value:"  << share_value << endl;
    cout << "total value:"  << totoal_value << endl;
}

