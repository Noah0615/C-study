#include "SharedPreferences.h"

SharedPreferences& SharedPreferences::getInstance(){
    static SharedPreferences sharedPreferences;
    return sharedPreferences;
}

void SharedPreferences::putInt(string key, int value) {
    preferences[key] = value;
}

int SharedPreferences::getInt(string key){
    if(preferences.count(key)){
        return preferences[key];
    } else
        return 0;
}

size_t SharedPreferences::size(){
    return preferences.size();
}