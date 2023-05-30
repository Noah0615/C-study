#ifndef UNTITLED_LOGGER_H
#define UNTITLED_LOGGER_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

enum logLevel {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3
};

class Logger {
public:
    static void setLogLevel(int level);
    static void debug(const string& message, const string& tag);
    static void info(const string& message, const string& tag);
    static void warning(const string& message, const string& tag);
    static void error(const string& message, const string& tag);
private:
    static int logLevel;
};
#endif //UNTITLED_LOGGER_H
