#include "Playlist.h"
#include <iostream>
using namespace std;

void Playlist::addSong(string name, string artist) {
    Song newSong(name, artist);
    songList->addNode(newSong);
}

void Playlist::removeSong(Song song) {
    songList->removeNode(song);
}

void Playlist::removeSong(Song song) {
    songList->removeNode(song);
}

void Playlist::printPlaylist() {
    cout << "Playlist:\n";
    songList->printList();
}
