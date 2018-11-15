//
// Created by Silvan Herrema on 26/01/2018.
//

#include "Hangman.h"
#include <iostream>
#include <string>

bool goodGuess = false;
char response;
int misses = 0;
int exposed = 0;

using namespace std;

Hangman::Hangman(string word) {

	string display = word;

	for (int i = 0; i < display.length(); i++)
	{
		display[i] = '*';
	}

	while (exposed < word.length()) 
	{
		cout << "Miss: " << misses << ": ";
		cout << "Enter a letter in word ";
		cout << display << " : ";
		char response;
		cin >> response;

		bool goodGuess = false;
		bool duplicate = false;
		for (int i = 0; i < word.length(); i++)
		{
			if (response == word[i])
			{
				if (display[i] == word[i]) {
					cout << response << " is already in the word.\n";
					duplicate = true;
					break;

				}
				else {
					display[i] = word[i];
					exposed++;
					goodGuess = true;
				}
			}

			if (duplicate)
			{
				continue;
			}
		}

		if (!goodGuess)
		{
			misses++;
			cout << response << " Is not in the word.\n";
		}
	}
	cout << "Congratulaitons, the word was " << word << "." << endl;
}

bool Hangman::GuessLetter(char c) {
	return false;
}

void Hangman::DrawHangman() {

}

void Hangman::DrawGuessedLetters() {

}

void Hangman::DrawGuessedWord() {


}

void Hangman::AddError() {



}
bool Hangman::IsCorrect() {
	return false;
}

char Hangman::GetInput() {
	char c;
	cin >> c;
	return c;
}