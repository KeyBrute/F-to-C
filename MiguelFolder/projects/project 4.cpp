/**------------------------------------------

    Programming Assignment 4: IMDB

    Course: CS 141, Fall 2022.
    System: Windows 10 and Visual Studio code 
    Starter Code Author: Dr. Sara Riazi
    Student Author: Alex Cruz Martinez 
-------------------------------------------*/

#include <iostream>   
#include <cctype>     
#include <vector>     
#include <sstream> 
#include <fstream>  

using namespace std;

/*********************************************** Helper functions ***************************************/

//The splitString function takes a line and split it on the delimiter and push the parts into items
struct titleRecord {
   string titleId;
   string primaryTitle;
   string startYear;
   string genres;
};

struct nameRecord {
   string nameId;
   string primaryName;
   string birthYear;
   string deathYear;
   string primaryProfession;
};

struct principalRecord {
   string titleId;
   string nameId;
   string character;
};


void splitString(string line, char delimiter, vector<string>& items ) {
	stringstream s_stream(line);
	while (s_stream.good()) {
		string item;
		getline(s_stream, item, delimiter);
		items.push_back(item);
	}
}

void titleStore(string titlesFile, vector<titleRecord>&titles){
	ifstream movietiles;
	movietiles.open(titlesFile);
	vector<string>titleVector;
	string m = "";
	char w = '\t';
	titleRecord p;
	getline(movietiles,m);
		while(!movietiles.eof()){
		getline(movietiles,m);
		splitString(m,w,titleVector);
		if(titleVector.size() == 9 ){
			p.titleId = titleVector[0];
			p.primaryTitle = titleVector[2];
			p.startYear = titleVector[5];
			p.genres = titleVector[8];
			titles.push_back(p);
		}
		titleVector.clear();
		}

}

void nameStore(string namesFile, vector<nameRecord>&names){
	ifstream movietiles;
	movietiles.open(namesFile);
	vector<string>nameVector;
	string m = "";
	char w = '\t';
	nameRecord p;
	getline(movietiles,m);
		while(!movietiles.eof()){
		getline(movietiles,m);
		splitString(m,w,nameVector);
		if(nameVector.size() == 6 ){
			p.nameId = nameVector[0];
			p.primaryName = nameVector[1];
			p.birthYear = nameVector[2];
			p.deathYear = nameVector[3];
			p.primaryProfession = nameVector[4];
			names.push_back(p);
		}
		nameVector.clear();
		}

}

void principalsStore(string principalsFile, vector<principalRecord>&principals){
	ifstream movietiles;
	movietiles.open(principalsFile);
	vector<string>principalVector;
	string m = "";
	char w = '\t';
	principalRecord p;
	getline(movietiles,m);
		while(!movietiles.eof()){
		getline(movietiles,m);
		splitString(m,w,principalVector);
		if(principalVector.size() == 6 ){
			p.titleId = principalVector[0];
			p.nameId = principalVector[2];
			p.character = principalVector[5];
			principals.push_back(p);
		}
		principalVector.clear();
		}

}

void searchMovies(){
string userSearch;
cout <<"Enter search phrase: ";
cin >> userSearch;
vector<string>userVector;
string m = userSearch;
char w = '+';
splitString(userSearch,w,userVector);
}

void searchActors(){

}

void menuDisplay(){
cout << "Select a menu option:" << endl;
cout << "   1. Search for movies" << endl;
cout << "   2. Search for actors/actressses" << endl;
cout << "   3. Exit" << endl;
cout << "Select a menu option: ";
int choice = 0;
cin >> choice;
cout << "Your choice --> " << choice << endl;
switch (choice) {
  case 1:
    searchMovies();
    break;
  case 2:
    searchActors();
    break;
}
}

/**********************************************************************************************************/

int run(string titlesFile, string namesFile, string principalsFile) {
	vector<titleRecord> titleVec;
	titleStore(titlesFile,titleVec);
	vector<nameRecord> nameVec;
	nameStore(namesFile,nameVec);
	vector<principalRecord> principalVec;
	principalsStore(principalsFile,principalVec);
	menuDisplay();
	return 0;	
}

int main() {
	//Change these addresses according to your local machine
	string titlesFile =	"movie.titles.tsv";
	string namesFile = "movie.names.tsv";
	string principalsFile = "movie.principals.tsv";

	//DO NOT change the main function. The main function will be removed by the autograder
	run(titlesFile, namesFile, principalsFile);
	return 0;
}
