#include <iostream>
#include <string>

using namespace std; 

 // Brief About Me (getting familliar with output, variables, as well as new line methods)

int main() {
string MyName = "Lewis"; 
    cout << "Hello my Name is " << MyName << ".";
    cout << " This is my first time learning C++, as well as my first 'project' for C++.\n";
    cout << "While this might be my first time using C++,"; 
    cout << " im not a complete beginner towards coding.\n\n";
 
    cout << "Ive previously learned python which has hepled me towards leanring C++,\n";
    cout << " however, the switch from python to C++ is still a strange change for me.\n";
    cout << "Overall, I hope you enjoy my efforts and my improvements I make throughout this journey!\n\n";

string FarewellWord = "Goodbye!";
    cout << FarewellWord;
    return 0;

/*
    do { 
        // ======= RUN GAME ======

        cout << "Lets begin the game!\n"; 
        cout << "I now have a number in my head thats from 1 - 100, try to guess it!\n\n";

        //generate random number

        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // gets a unique number based on the systems clock

        mt19937 gen(seed); // the actual generator that makes random data (aka the mersenne twister)

        uniform_int_distribution<> distrib(1, 100); // Distribution of random numbers in wide range 

        int random_num = distrib(gen); 
  
        //ask for users answer
     
        int users_guess;
        std::cout << "Enter your guess here: ";
        std::cin >> users_guess;
    

        while (users_guess != random_num) { // will keep running these conditionals only if user doesnt guess right

            if (users_guess < random_num) { // If guess is low 
                std::cout << "Guess Higher!\n\n";
            }

            else if (users_guess > random_num) { // if guess is high 
                std::cout << "Guess Lower!\n\n"; 
            }

            std::cout << "Enter your guess here: "; // ask the user for another guess 
            std::cin >> users_guess;

            if (users_guess == random_num) {
                std::cout << "Congrats! You've Guessed The Right Number!\n\n";
            }

        }

        // ===== ASK TO PLAY AGAIN =====
        string users_replay_choice;
        std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
        std::cin >> users_replay_choice;

        // ==== HANDLE INVALID INPUT =====
        while (users_replay_choice != "Y" && users_replay_choice != "N") {
            std::cout << "\nSeems like you've entered the wrong thing, please make sure its just 'Y' or 'N' \n";
            std::cout << "and make sure they are capitalized.\n\n";

            std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
            std::cin >> users_replay_choice;
        }

        // ==== EXIT IF N ====
        if (users_replay_choice == "N") {
            std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
            std::cout << "Goodbye!" << endl;
            std::exit(0);
        }
    } while (users_replay_choice == "Y");

*/
}