#pragma once
#include <iostream>
using namespace std;

class clsDate
{
private:
    short _day=0;
    short _month=0;
    short _year=0;
public:
    void set_day(short day)
    {
        if (0<day && day<=31)
        { 
            _day=day;
        }
        else
        {
            cout<<day<<" is invalid"<<endl;
        }
    }
    short get_day()
    {
        return _day;
    }
    void set_month(short month)
    {
        if (0<month && month<=12)
        { 
            _month=month;
        }
        else
        {
            cout<<month<<" is invalid"<<endl;
        }
    }
    short get_month()
    {
        return _month;
    }
    void set_year(short year)
    {
        _year=year;
    }
    short get_year()
    {
        return _year;
    }
};