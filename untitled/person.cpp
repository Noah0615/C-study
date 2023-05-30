#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <map>
#include "Person.h"
using namespace std;

Person::Person(string name, string number) : nameing(name), numbering(number) {}

void Person::modifyNumber(string number) {
    numbering = number;
}

void Person::print() const {
    cout << nameing << " " << numbering << endl;
}

string Person::getName() const {
    return nameing;
}





