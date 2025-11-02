#include "Date.h"
#include <sstream>

Date::Date() : day(1), month(1), year(2000) {}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
Date::Date(const Date& other) : day(other.day), month(other.month), year(other.year) {}

void Date::display() const {
    cout << day << "." << month << "." << year;
}

string Date::toString() const {
    stringstream ss;
    ss << day << "." << month << "." << year;
    return ss.str();
}

Date Date::operator+(int days) const {
    Date result = *this;
    result.day += days;
    return result;
}

bool Date::operator==(const Date& other) const {
    return day == other.day && month == other.month && year == other.year;
}

bool Date::operator!=(const Date& other) const {
    return !(*this == other);
}

bool Date::operator<(const Date& other) const {
    if (year != other.year) return year < other.year;
    if (month != other.month) return month < other.month;
    return day < other.day;
}

ostream& operator<<(ostream& os, const Date& date) {
    os << date.day << "." << date.month << "." << date.year;
    return os;
}