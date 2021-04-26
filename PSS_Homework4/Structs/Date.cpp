#include <sstream>
#include "Date.h"

using namespace std;

string Date::dateToString() {
    return year + "-" + month + "-" + day + ":" + hour;
}

Date::Date(string s) {
    if (s.size() != 13)
        throw runtime_error("Date::Date(): wrong input data");
    year = s[0] + s[1] + s[2] + s[3];
    month = s[5] + s[6];
    day = s[8] + s[9];
    hour = s[11] + s[12];
}

