#include "String.h"
#include <cstring>
#include <utility>
#include <iostream>
using namespace std;
/*
String::String() : len(0), s(nullptr) {}

String::String(const char* str) : len(strlen(str)), s(new char[len+1]) {
    strcpy(s, str);
}

String::String(const String& str) : len(str.len), s(new char[len+1]) {
    strcpy(s, str.s);
}

String& String::operator=(const String& str) {
    String temp(str);
    swap(temp);
    return *this;
}

String::String(String&& str) noexcept : len(str.len), s(str.s) {
    str.s = nullptr;
    str.len = 0;
}

String& String::operator=(String&& str) noexcept {
    swap(str);
    return *this;
}

String::~String() {
    delete[] s;
}

void String::swap(String& str) {
    using std::swap;
    swap(s, str.s);
    swap(len, str.len);
}

const char* String::data() const {
    return s;
}

char& String::at(size_t pos){
    if(len!=0 && 0 <= pos && pos < len)
        return s[pos];
    throw std::out_of_range("out of range at index: " + std::to_string(pos) + ", but the length of String is " + std::to_string(len));
}

size_t String::size() const {
    return len;
}

void String::print(const char* str) const {
    std::cout << str << ": " << s << ", size: " << len << std::endl;
}
*/

