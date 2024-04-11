#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string chooseWord();
void renderGame(string guessedWord, int badGuessCount);
char readAGuess();
bool contains(string word, char guess);
string update(string guessedWord, string word, char guess);

int main()
{
	srand(time(0));
	string word = chooseWord();
	string guessedWord = string(word.length(), '-');
	int badGuessCount = 0;

	do {
		renderGame(guessedWord, badGuessCount);
		char guess = readAGuess();
		if (contains(word, guess))
			guessedWord = update(guessedWord, word, guess);
		else badGuessCount++;
	} while (badGuessCount < 7 && word != guessedWord);

	renderGame(guessedWord, badGuessCount);
	if (badGuessCount != 7)
		cout << "You won !!!";
	else
		cout << "You lost. The correct word is " << word;

	return 0;
}

const string WORD_LIST[] = {
	"cloud", "hospital", "key", "receipt", "brush","shirt", "ship", "dress", "egg",
	 "spoon", "shelf", "face", "library", "bridge", "map", "cat", "horse", "bone", "chair", "boat",
"garden", "arm", "circle", "window", "leaf",
"worm", "nail", "hook", "net", "hat",
"fish", "flower", "snake", "picture", "rabbit",
"drum", "stove", "pot", "pencil", "ball",
"knife", "sponge", "table", "mountain", "foot",
"lock", "wheel", "fork", "neck", "town",
 "sock", "church", "skirt", "flag", "basket",
 "ladder", "chain", "station", "plate", "flag",
 "floor", "arm", "plane", "clock", "square",
"box", "pool", "bottle", "cake", "sheep",
 "mouth", "finger", "island", "tree", "basket",
 "ant", "bed", "basin", "whistle", "dog",
 "worm", "vest", "eye", "farm", "roof",
 "rabbit", "boy", "guitar", "ship", "tooth",
 "ticket", "chain", "flower", "book", "map",
"hair", "telephone", "cloud", "mouth"};

const int wordNum = sizeof(WORD_LIST) / sizeof(WORD_LIST[0]);

string chooseWord()
{
	int x = rand() % wordNum;
    return WORD_LIST[x];
}

const string GiaTreoCo[] = {
        "   -------------    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |           |    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          /     \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          / \\  \n"
        "   |     \n"
        " -----   \n"
    };

void renderGame(string guessedWord, int badGuessCount)
{
	cout << GiaTreoCo[badGuessCount] << endl;
	cout << guessedWord << endl;
	cout << "Number of wrong guesses: " << badGuessCount << endl;
}

char readAGuess()
{
	char input;
	cout << "Your guess: ";
	cin >> input;
	return input;
}

bool contains(string word, char c)
{
	return (word.find_first_of(c) != string::npos);
}

string update(string guessedWord, string word, char guess)
{
	for (int i = word.length()-1; i >= 0; i--) {
        if (word[i] == guess) {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}
