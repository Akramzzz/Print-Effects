#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include<cmath>
#include <cstdlib>
#include<vector>
#include "iomanip";

using namespace std;


void findWrd() {

	char ltr;
	short counter = 0;
	string word;
	string wordLtrs = "";

	cout << "Enter A Word/Sentence : ";
	getline(cin, word);

	for (short i = 30; i <= 122; i++) {

		ltr = i;
		cout << wordLtrs << ltr << endl;

		if (ltr == word[counter]) {
			i = 29;
			wordLtrs = wordLtrs + ltr;
			counter++;


		}

		if (wordLtrs == word) { break; }

	}





}




int main()

{


	findWrd();

}




