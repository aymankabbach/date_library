#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate Date;
    Date.set_day(32);
    Date.set_day(10);
    Date.set_month(13);
    Date.set_month(8);
    Date.set_year(2020);
    cout<<Date.get_day()<<"/"<<Date.get_month()<<"/"<<Date.get_year()<<endl;
    system("pause");
    return 0;
}