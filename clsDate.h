#pragma once
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

class clsDate
{
private:
    short _day=1;
    short _month=1;
    short _year=1900;
public:
    clsDate()
    {
        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);
        int day = aTime->tm_mday;
        int month = aTime->tm_mon + 1;
        int year = aTime->tm_year + 1900;
        _day=day;
        _month=month;
        _year=year;
    }
    clsDate(short day, short month, short year)
    {
        if (0<day && day<=31)
        {
            _day=day;
        }
        if (0<month && month<=12)
        {
            _month=month;
        }
        _year=year;
    }
    clsDate(short days,short year)
    {
        vector <short> Days_in_Months={31,28,31,30,31,30,31,31,30,31,30,31};
        short months=0;
        while (days>0 && days>Days_in_Months[months])
        {
            days-=Days_in_Months[months];
            months++;
        }
        _day=days;
        _month=months+1;
        _year=year;
    }
    clsDate(string date)
    {
        vector <string> vSplit_date;
        string sword;
        string delim="/";
        short pos=0;
        while ((pos = date.find(delim)) != std::string::npos)
        {
            sword=date.substr(0,pos);
            if (sword!="")
            {
                vSplit_date.push_back(sword);
            }
            date.erase(0,pos+delim.length());
        }
        if (date!="")
        {
            vSplit_date.push_back(date);
        }
        _day=stoi(vSplit_date[0]);
        _month=stoi(vSplit_date[1]);
        _year=stoi(vSplit_date[2]);
    }
    void set_day(short day)
    {

        if (0<day && day<=31)
        { 
            _day=day;
        }
        else
        {
            cout<<"day "<<day<<" is invalid"<<endl;
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
            cout<<"month "<<month<<" is invalid"<<endl;
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
    void get_date()
    {
        cout<<get_day()<<"/"<<get_month()<<"/"<<get_year()<<endl;
    }
};