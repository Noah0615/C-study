#include "StringSplitter.h"
#include <cctype>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;

StringSplitter::StringSplitter(string str) : string1{move(str)} {}

StringSplitter& StringSplitter::trim() {
    auto erase_first_space = find_if_not(string1.begin(), string1.end(), [](auto c){
        return isspace(c);
    });
    string1.erase(string1.begin(), erase_first_space);

    auto erase_last_space = find_if_not(string1.rbegin(), string1.rend(), [](auto c) {
        return isspace(c);
    }).base();
    string1.erase(erase_last_space, string1.end());

    return *this;
}

StringSplitter& StringSplitter::removeNonAlnum(){
    string1.erase(remove_if(string1.begin(), string1.end(), [](auto c){
        return !(isalnum(c) || isspace(c));
    }), string1.end());
    return *this;
}

vector<string> StringSplitter::split(char delimiter){
    vector<string> tokens;
    this->trim();

    istringstream iss(string1);
    string token;
    while(getline(iss, token, delimiter)) {
        if(!token.empty()) {
            tokens.push_back(token);
        }
    }
    return tokens;
}