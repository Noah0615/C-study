//
// Created by wjsrh on 2023-04-25.
//

#ifndef UNTITLED_STRING_H
#define UNTITLED_STRING_H
#pragma once

#include <stddef.h>
class String {
public:
    String();
    String(const char* str);
    String(const String& str);
    String& operator=(const String& str);
    ~String();
    const char* data() const;
    char& at(size_t);
    size_t size() const;
    void print(const char* str="") const;
private:
    void swap(String& str);
    int len;
    char* s;
};

#endif //UNTITLED_STRING_H
