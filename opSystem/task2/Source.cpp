#include <iostream>
#include <string>

using namespace std;

string prompt;
int histCount = 0;
string hist[11];


void history() {

	if (histCount <= 10){
		hist[histCount] = prompt;
		histCount++;
	}
	else
	{
		for (int i = 1; i < 11; ++i) {
			hist[(i - 1)] = hist[i];
		}
		hist[10] = prompt;
	}
}
int main() {

//	string prompt;
	int powerPrompt = 0;
	//string hist[10];
	int histCount = 0;
	string show = getenv("USER");
	cout << "< ";
	cout << show;
	cout << " > ";
	cin >> prompt;
	//string prmpt;

	while (true) {
		
		if (prompt == "url") {
			powerPrompt++;
			cout << "< " << show << " > ";
			cout << "www.cs.wayne.edu/~lihao/Courses/CSC4420/" << endl;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "quit" || prompt == "exit")
		{
			cout << "exited..." << endl;
			break;
		}
		else if (prompt == ""){

		}
		else if (prompt == ""){

		}
		else if (prompt == ""){

		}
		else if (prompt == ""){

		}
		else if (prompt == ""){

		}
		
		else if (prompt == "prompt") {
			powerPrompt++;
			cout << "Type a new prompt without any spaces: ";
			cin >> show;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "history") {
			powerPrompt++;
			for (int p = 0; p < 11; p++) {
				cout << p << " - " << hist[p] << endl;
			}
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else {
			powerPrompt++;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cout << "Invalid input" << endl;
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;

		}

	}
	return 0;

}
