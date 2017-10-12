// PigLatin.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Translate function
int translateToPigLatin(string& wordEnglish)
{

	//Consonants
	if (wordEnglish.length() <= 2)
	{
		cout << wordEnglish << endl;
		return 0;
	}

	else if (wordEnglish == "the" || wordEnglish == "The" || wordEnglish == "a" || wordEnglish == "A" || wordEnglish == "an" || wordEnglish == "An" || wordEnglish == "and" ||
		wordEnglish == "And" || wordEnglish == "but" || wordEnglish == "But" || wordEnglish == "for" || wordEnglish == "For" || wordEnglish == "nor" || wordEnglish == "Nor" ||
		wordEnglish == "so" || wordEnglish == "So" || wordEnglish == "yet" || wordEnglish == "Yet" || wordEnglish == "or" || wordEnglish == "Or")
	{
		cout << wordEnglish << endl;
		return 0;
	}

	else if (wordEnglish[0] == 'b' || wordEnglish[0] == 'B' || wordEnglish[0] == 'c' || wordEnglish[0] == 'C' || wordEnglish[0] == 'd' || wordEnglish[0] == 'D' || wordEnglish[0] == 'f' ||
		wordEnglish[0] == 'F' || wordEnglish[0] == 'g' || wordEnglish[0] == 'G' || wordEnglish[0] == 'h' || wordEnglish[0] == 'H' || wordEnglish[0] == 'j' || wordEnglish[0] == 'J' || wordEnglish[0] == 'k' || wordEnglish[0] == 'K' || wordEnglish[0] == 'l' ||
		wordEnglish[0] == 'L' || wordEnglish[0] == 'm' || wordEnglish[0] == 'M' || wordEnglish[0] == 'n' || wordEnglish[0] == 'N' || wordEnglish[0] == 'p' || wordEnglish[0] == 'P' || wordEnglish[0] == 'q' || wordEnglish[0] == 'r' || wordEnglish[0] == 'R' ||
		wordEnglish[0] == 's' || wordEnglish[0] == 'S' || wordEnglish[0] == 't' || wordEnglish[0] == 'T' || wordEnglish[0] == 'v' || wordEnglish[0] == 'V' || wordEnglish[0] == 'W' || wordEnglish[0] == 'W' || wordEnglish[0] == 'x' || wordEnglish[0] == 'X' ||
		wordEnglish[0] == 'y' || wordEnglish[0] == 'Y' || wordEnglish[0] == 'z' || wordEnglish[0] == 'Z')
	{
		string letter0;
		cout << "Consonant: ";
		letter0 = wordEnglish[0];
		wordEnglish.erase(wordEnglish.begin());//returns pointer to first character
		wordEnglish.append(letter0);
		wordEnglish.append("ay");
		cout << wordEnglish << endl;
		return 0;
	}


	//Vowels
	else if (wordEnglish[0] == 'a' || wordEnglish[0] == 'A' || wordEnglish[0] == 'e' || wordEnglish[0] == 'E' || wordEnglish[0] == 'i' || wordEnglish[0] == 'I' ||
		wordEnglish[0] == 'o' || wordEnglish[0] == 'O' || wordEnglish[0] == 'u' || wordEnglish[0] == 'U')
	{
		cout << "Vowel: ";
		wordEnglish.append("ay");
		cout << wordEnglish << endl;
		return 0;
	}

	else
	{
		cout << "Invalid Input." << endl;
		return -1;
	}
}

//main
int main()
{
	int success;
	bool translating = true;
	while (translating) {
		string wordEnglish;
		char ynresponse;

		//Intro to Pig Latin program
		cout << "Welcome to Pig Latin Translator V1.0" << endl;
		cout << "Enter a word that you would like translated" << endl;
		cin >> wordEnglish;
		cout << "The word you entered was: ";
		cout << wordEnglish << endl;
		cout << "Now translating " << wordEnglish << " to Pig Latin" << endl;
		success = translateToPigLatin(wordEnglish);
		//Loop for another translation
		cout << "Would you like to enter another word? Y/N" << endl;
		cin >> ynresponse;

		if (ynresponse == 'N' || ynresponse == 'n')
		{
			cout << "Thank you for using Pig Latin Translator V1.0, Goodbye" << endl;
			translating = false;
		}

		else if (ynresponse == 'Y' || ynresponse == 'y')
		{
		}
		else {
			cout << "Invalid response, ending translation" << endl;
			translating = false;
		}
	}
    return 0;

}