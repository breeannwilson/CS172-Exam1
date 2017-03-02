#include <string>
#include "Playlist.h"
using namespace std;

// constructor for the playlist function
Playlist::Playlist(string newName) {
	name = newName;
	numsongs = 0;
}

//the name of the playlist
string Playlist::getName() {
	return name;
}


bool Playlist::hasGenre(string genre) {
	for (int i = 0; i < numsongs; i++) {
		if (songs[i].getGenre() == genre)
			return true;
	}
	return false;
}

void Playlist::addSong(Song song) {
	if (numsongs < 9) {
		songs[numsongs] = song;
		numsongs++;
	}
}

int Playlist::numberOfSongs() {
	return numsongs;
}

string Playlist::playSong(int songNumber) {
	if (songNumber < numsongs && songNumber > -1) {
		Song theSong = songs[songNumber];
		return theSong.getTitle();
	}
	else
		return "";
}
