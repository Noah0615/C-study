//implement your code
//static 맴버 변수를 "정의" 하고 초기값을 1로 설정합니다.
//맴버 함수들 구현

#include "Logger.h"
#include <iostream>

using namespace std;

int Logger::logLevel = 1;

void Logger::setLogLevel(int level){
    logLevel = level;
}

void Logger::debug(const string& message, const string& tag) {
    if(logLevel <= DEBUG)
        cout << "[DEBUG][" << tag << "] " << message << endl;
}

void Logger::info(const string& message, const string& tag) {
    if(logLevel <= INFO)
        cout << "[INFO][" << tag << "] " << message << endl;
}

void Logger::warning(const string& message, const string& tag) {
    if(logLevel <= WARNING)
        cout << "[WARNING][" << tag << "] " << message << endl;
}

void Logger::error(const string& message, const string& tag) {
    if(logLevel <= ERROR)
        cout << "[ERROR][" << tag << "] " << message << endl;
}



