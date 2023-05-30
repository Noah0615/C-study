//
// Created by wjsrh on 2023-04-05.
//

#ifndef UNTITLED_PLAYLIST_H
#define UNTITLED_PLAYLIST_H
#include "SinglyLinkedList.h"
using namespace std;

class Playlist {
public:
    Playlist() : songList(new SinglyLinkedList()) {}

    void addSong(string name, string artist);
    void removeSong(Song song);
    void printPlaylist();

private:
    SinglyLinkedList* songList;
};
#endif //UNTITLED_PLAYLIST_H
