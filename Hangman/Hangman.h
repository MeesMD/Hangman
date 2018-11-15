//
// Created by Silvan Herrema on 26/01/2018.
//

#ifndef HANGMAN_HANGMAN_H
#define HANGMAN_HANGMAN_H
#include <string>

class Hangman {
public:
    /*
     * The constructor of the class. This gets executed as soon as a hangman object is created;
     * the argument is a string (the word the player has to guess)
     */
    Hangman(std::string);

    /*
     * Guess a letter.
     * Check every letter in the hidden word and see if it corresponds with the char passed in- the function
     * Add a letter to guessed_letters and replaces the necessary letters in guessed_word
     * Returns false if the player guessed a char that's not in the word. Returns true if the player guesses a char that IS in the hidden_word.
     */
    bool GuessLetter(char);

    /*   OPTIONAL: Use ASCII code to draw a hangman. Use arrays
     *   _____
     *   |  o
     *   | /|\
     *   | / \
     *   |____
     *   TIP: Create a 2 dimensional array
     *   char arr[5][5] = { {'_', '_', '_', '_', '_'},
     *                      {'|', ' ', ' ', ' ', ' '},
     *                      {'|', ' ', ' ', ' ', ' '},
     *                      {'|', ' ', ' ', ' ', ' '},
     *                      {'|', ' ', ' ', ' ', ' '},
     *                      {'|', '_', '_', '_', '_'} };
     *   TIP 2: Print this using a nested (double) for loop.
     */
    void DrawHangman();

    /*
     * Print the guessed letters
     */
    void DrawGuessedLetters();

    /*
     * Print the (current) guessed word
     */
    void DrawGuessedWord();
    void AddError();

    /*
     * Is the hidden_word guessed? Do hidden_word and guessed_word match?
     */
    bool IsCorrect();

    /*
     * Get input. Only a char.
     */
    char GetInput();
private:
    /*
     * The amount of times the player has guessed wrong.
     */
    int errors = 0;

    /*
     * The word the player need to guess.
     */
    std::string hidden_word;

    /*
     * The word the player has guessed so far.
     * Every unguessed char is represented by a '.'
     *
     * For example, the word is "dollar"
     * The player will only see "......".
     */
    std::string guessed_word;

    /*
     * all the chars the player has guessed so far. 
     */
    std::string guessed_letters;
};


#endif //HANGMAN_HANGMAN_H
