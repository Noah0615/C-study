#ifndef UNTITLED_SHAREDPREFERENCES_H
#define UNTITLED_SHAREDPREFERENCES_H
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class SharedPreferences;
class SharedPreferences{
private:
    map<string, int> preferences;
    SharedPreferences() = default;
    ~SharedPreferences() = default;
    SharedPreferences(const SharedPreferences&) = delete;
    SharedPreferences& operator=(const SharedPreferences&)=delete;
    friend class vector<SharedPreferences*>;
public:
    static SharedPreferences& getInstance();
    void putInt(string key, int value);
    int getInt(string key);
    size_t size();
};
#endif //UNTITLED_SHAREDPREFERENCES_H
