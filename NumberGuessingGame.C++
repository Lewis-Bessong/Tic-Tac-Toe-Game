#include <iostream>
#include <string> // tools for having text 
#include <random> // tools for generating random things
#include <chrono> // for specifically making sure something newly random is generated

using namespace std;

int main () {
    
    // Brief description of what the game is.

    std::cout << "Welcome to my Number Guessing game!\n\n";

    std::cout << "This game consists of guessing a number\n";
    std::cout << "that the computer has provided and you\n";
    std::cout << "the user, have to try and get the number\n";
    std::cout << "with the help of the computers hints.\n\n";
    
    std::cout << "(For example, if your guess is less than the number by alot it will say 'Guess Higher!'and vise versa.\n"; 
    std::cout << "However, if its a close guess it will say 'Close, Guess Higher!' or 'Close, Guess Lower'.)\n\n";

    // Welcoming text into game and asking for users name

    std:string users_first_name; // allows for there to be variable for strings 
    std::cout << "Before we start the game, whats your first name?: "; // where the user will put their name
    
    //set conditional for if the user trys to put numbers 

    std::cin >> users_first_name; //computer puts user name into variable 
    std::cout << "Well then " << users_first_name << " have fun!\n\n"; // response after users input 

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
    
    // ==== LOGIC FOR USERS GUESSING NUMBER ====
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

    // ==== CODE THAT EXECUTES WHEN USER INPUTS WRONG REPLAY CHOICE =====
    while (users_replay_choice != "Y" && users_replay_choice != "N") {
        std::cout << "\nSeems like you've entered the wrong thing, please make sure its just 'Y' or 'N' \n";
        std::cout << "and make sure they are capitalized.\n\n";

        string users_replay_choice;
        std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
        std::cin >> users_replay_choice; 

        // ==== EXIT IF N ====
        if (users_replay_choice == "N") {
            std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
            std::cout << "Goodbye!" << endl;
            std::exit(0);
        }
    
        do {
            // ======= RUN GAME ======

            cout << "\n\nOkay! Lets do this again!\n"; 
            cout << "I have a different number in my head now thats still from 1 - 100, try to guess this one!\n\n";

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

                string users_replay_choice;
                std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
                std::cin >> users_replay_choice;

                if (users_replay_choice == "N") {
                    std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
                    std::cout << "Goodbye!" << endl;
                    std::exit(0);
                }
            }

            // ==== EXIT IF N ====
            if (users_replay_choice == "N") {
                std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
                std::cout << "Goodbye!" << endl;
                std::exit(0);
            }
        } while (users_replay_choice == "Y");
    
    }   
    
    // ==== CODE THAT EXCECUTES WHEN USER SAYS 'Y' TO REPLAY
    if (users_replay_choice == "Y") {

        cout << "\n\nOkay! Lets do this again!\n"; 
        cout << "I have a different number in my head now thats still from 1 - 100, try to guess this one!\n\n";

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

            string users_replay_choice;
            std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
            std::cin >> users_replay_choice;

            if (users_replay_choice == "N") {
                std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
                std::cout << "Goodbye!" << endl;
                std::exit(0);
            }
        }

        // ==== EXIT IF N ====
        if (users_replay_choice == "N") {
            std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
            std::cout << "Goodbye!" << endl;
            std::exit(0);
        }

    }

    // ==== CODE THAT EXCECUTES WHEN USER SAYS 'N' TO REPLAY
    if (users_replay_choice == "N") { 
        std::cout << "\nOkay! I hope you had a good time playing my game and hope you play again!\n";
        std::cout << "Goodbye!" << endl;
        std::exit(0);
    }

    return 0;
}
