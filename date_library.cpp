#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate Date;
    cout<<Date.getagebydays(13,12,1995)<<endl;
    cout<<Date.isDateValid()<<endl;
    system("pause");
    return 0;
}