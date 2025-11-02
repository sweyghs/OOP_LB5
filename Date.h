#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date();
    Date(int d, int m, int y);
    Date(const Date& other);

    void display() const;
    string toString() const;

    Date operator+(int days) const;
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    bool operator<(const Date& other) const;

    friend ostream& operator<<(ostream& os, const Date& date);
};