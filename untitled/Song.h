//
// Created by wjsrh on 2023-04-05.
//

#ifndef UNTITLED_SONG_H
#define UNTITLED_SONG_H
#include <string>
using namespace std;

class Song {
public:
    string name;
    string artist;

    Song(string n, string a) : name(n), artist(a) {}

    bool equals(Song other) {
        return name == other.name && artist == other.artist;
    }

    string toString() {
        return name + " by " + artist;
    }

};

#endif //UNTITLED_SONG_H
