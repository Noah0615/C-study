//
// Created by wjsrh on 2023-05-23.
//

#ifndef UNTITLED_STRINGSPLITTER_H
#define UNTITLED_STRINGSPLITTER_H
#include <string>
#include <vector>
using namespace std;
class StringSplitter {
public:
    StringSplitter(string str);
    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    vector<string> split(char delimiter);
private:
    string string1;
};

#endif //UNTITLED_STRINGSPLITTER_H
