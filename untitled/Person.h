//
// Created by wjsrh on 2023-05-23.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H
#include <iostream>
using namespace std;

class Person{
public:
    Person()=default;
    Person(string name, string number);
    void modifyNumber(string number);
    void print() const;
    string getName() cosnt;

private:
    string nameing;
    string numbering;
};
#endif //UNTITLED_PERSON_H
