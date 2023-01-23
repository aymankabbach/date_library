#pragma once
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class clsDate
{
private:
    string _day="";
    string _month="";
    string _year="";
public:
    clsDate()
    {
        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);
        int day = aTime->tm_mday;
        int month = aTime->tm_mon + 1;
        int year = aTime->tm_year + 1900;
        _day=to_string(day);
        _month=to_string(month);
        _year=to_string(year);
    }
    void set_day(short day)
    {

        if (0<day && day<=31)
        { 
            _day=to_string(day);
        }
        else
        {
            cout<<"day "<<day<<" is invalid"<<endl;
        }
    }
    string get_day()
    {
        return _day;
    }
    void set_month(short month)
    {
        if (0<month && month<=12)
        { 
            _month=to_string(month);
        }
        else
        {
            cout<<"month "<<month<<" is invalid"<<endl;
        }
    }
    string get_month()
    {
        return _month;
    }
    void set_year(short year)
    {
        _year=to_string(year);
    }
    string get_year()
    {
        return _year;
    }
    void get_date()
    {
        string day=get_day();
        string month=get_month();
        string year=get_year();
        if (day=="" || month=="" || year=="")
        {
            cout<<"there is no valid date yet"<<endl;
        }
        else
        {
            cout<<day<<"/"<<month<<"/"<<year<<endl;   
        }
    }
};