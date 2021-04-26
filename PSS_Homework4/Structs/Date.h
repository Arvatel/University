#ifndef PSS_HOMEWORK4_DATE_H
#define PSS_HOMEWORK4_DATE_H

#include <string>

using namespace std;

struct Date {
    string year;
    string month;
    string day;
    string hour;

    string dateToString();
    Date(string s);
};


#endif //PSS_HOMEWORK4_DATE_H
