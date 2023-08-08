#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    
    string choice;

    do
    {

	const string gameOptions[3] = { "rock", "paper", "scissors" };

    srand(time(0));
	size_t gameChance = rand()% 3;
	string word = gameOptions[gameChance];


	cout << "Welcome !!" << endl;
    cout << "This is a game of ROCK, PAPER, SCISSORS" << endl;
   
    string x;

    cout << "Here we go choose one and see if you can beat me HAHAHAHA !!" << endl;
    cout << "____________________________________________________________" << endl;

    cin >> x;

    cout << "___________" << endl;
    cout << "you entered: " << x << endl;
    cout << "___________" << endl;

    

        if (gameOptions[gameChance] == "rock")
        {
            while (x == "rock")
            {
                cout << "try again" << endl;
                cin >> x;
            }
            if (x == "scissors")
            {
                cout << "Sorry You Lost" << endl;
                cout << "The answer was PAPER" << endl;
            }
            else if (x == "paper")
            {
                cout << "Congrats You WON" << endl;
            }
            else
            {
                cout << "That's not a choice silly" << endl;
            }
        }

        else if (gameOptions[gameChance] == "paper")
        {
            while (x == "paper")
            {
                cout << "try again" << endl;
                cin >> x;
            }
            if (x == "rock")
            {
                cout << "You Lost" << endl;
                cout << "The answer was SCISSORS" << endl;
            }
            else if (x == "scissors")
            {
                cout << "Congrats You WON" << endl;
            }
            else
            {
                cout << "That's not a choice silly" << endl;
            }
        }

        else
        {
            while (x == "scissors")
            {
                cout << "try again" << endl;
                cin >> x;
            }
            if (x == "paper")
            {
                cout << "Sorry You Lost" << endl;
                cout << "The answer was ROCK" << endl;
            }
            else if (x == "rock")
            {
                cout << "Congrats You WON" << endl;
            }
            else
            {
                cout << "That's not a choice silly" << endl;
            }
        }
        
        cout << " " << endl;
        cout << "_____________________________________________" << endl;
        cout << "Would you like to go again ?? (yes or no) : ";
        cin >> choice;
        cout << "_____________________________________________" << endl;
    } while (choice == "Yes" || choice == "yes" || choice == "YES" || choice == "Y" || choice == "y");

    cout << " " << endl;
    cout << "Thanks for Playing" << endl;
   
    return 0;
}