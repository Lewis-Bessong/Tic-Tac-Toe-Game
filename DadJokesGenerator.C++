#include <iostream>
#include <string>
#include <random>
#include <vector>

// This project will be my first self project with no plan/roadmap on how to do it, this will be all on me.
// This project will be about dad jokes that will generate when the user needs it.

int main () { 

    // ==== GAME DESCRIPTION ====

    std::cout << "Helloooo user!!!\n\n";

    std::cout << "Welcome to my Dad Joke Generator!\n";
    std::cout << "Even though the name may seem obvious, i'll still explain it, the dad joke generator\n";
    std::cout << "is a generator that you can use when you need a quick, random, and funny dad joke in\n";
    std::cout << "the heat of a momment.\n\n";
    
    std::cout << "This is how it works, the generator will ask you if you want a joke, say yes then it\n";
    std::cout << "will give you a joke, if no then the program will end. The generator will also ask if\n";
    std::cout << "you want another joke and depending on what you say then the same thing will repeat.\n\n";


    // ==== INPUT OF USERS NAME ====

    std::string users_name;

    std::cout << "Alright lets get started! But before that whats your name? (This will not be shared with others): ";
    std::cin >> users_name;

    std::cout << "\nOkay then " << users_name << " have fun!\n\n";


    // ==== GAME START ==== RANDOMIZATION LOGIC START ====

    std::vector<std::string> random_dad_jokes = {
        "Why don't eggs tell jokes? They'd crack up.", // 0 
        "Why did the scarecrow win an award? He was outstanding in his field.", // 1 
        "I tried to catch fog yesterday... Mist it.", // 2 
        "I used to hate facial hair, but then it grew on me.",
        "Im reading a book about anti-gravity. It's impossible to put down.", // 3
        "I don't trust stairs.... they're always up to something.", // 4
        "I'm on a seafood diet, I see food and then I eat it.", // 5
        "Why don't skeletons fight each other? its because they don't have the guts too.", // 6 
        "Why did the bicycle fall over? It was two-tired.", // 7 
        "I have a joke about construction... wait im still working on it.", // 8
        "Why'd the computor go to the doctor? Because it caught a virus.", // 9
        "Listen to my pizza joke.... wait no its to cheesy." // 10
        "I asked my dog what's two minus two... he said nothing." //11 
        "Why can't your nose be 12 inches long? then it would be a foot." //12
        "I used to play piano by ear.. now i use my hands." //13 
        "I used to be adicted to soap.. but im clean now." //14
        "I told my plant a joke.. it needed time to gorw on it tho." //15
        "I'm reading a book about glue,, but im stuck on chapter one." //16 
        "Why did the coffe file a police report... it got mugged." //17
        "I tried to make a belt out of watches, it was a waste of time." // 18
    };

    int randomindex = rand() % random_dad_jokes.size();
    

    // computer ask to play 

    std::string users_choice_to_play;
    std::cout << "\nDo you want to hear a dad joke ?? (Y/N); ";
    std::cin >> users_choice_to_play;

    if (users_choice_to_play == "Y" || users_choice_to_play == "y") {

        std::cout << "\n" << random_dad_jokes[randomindex] << "\n";


    } else if (users_choice_to_play == "N" || users_choice_to_play == "n"){

        std::cout << "\nEnjoy the jokes and make sure to share!!";
        return 0;

    } else{

        do{
            int randomindex = rand() % random_dad_jokes.size();

            std::cout << "\nPlease make sure you enter the correct input, 'y', 'Y', 'N', or 'n' are the only acceptions.\n\n";

            std::string users_choice_to_play;
            std::cout << "\nDo you want to hear a dad joke ?? (Y/N); ";
            std::cin >> users_choice_to_play;


            if (users_choice_to_play == "Y" || users_choice_to_play == "y") {

                std::cout << "\n" << random_dad_jokes[randomindex] << "\n";
                break; // escapes this else loop when joke is completed to the replay feature 

            } else if (users_choice_to_play == "N" || users_choice_to_play == "n"){

                std::cout << "\nEnjoy the jokes and make sure to share!!";
                return 0;

            } else{

                std::cout << "\n ERROR \n";

            }

        } while (users_choice_to_play != "Y" && users_choice_to_play != "y" || users_choice_to_play != "N" && users_choice_to_play != "n");

    }

    
    // ==== GAME REPLAY ====

    std::string users_replay_choice;

    do{
        int randomindex = rand() % random_dad_jokes.size();

        std::string users_replay_choice;
        std::cout << "\nDo you want to hear another one ?? (Y/N); ";
        std::cin >> users_replay_choice;


        if (users_replay_choice == "Y" || users_replay_choice == "y") {

            std::cout << "\n" << random_dad_jokes[randomindex] << "\n";

        } else if (users_replay_choice == "N" || users_replay_choice == "n"){

            std::cout << "\nEnjoy the jokes and make sure to share!!";
            return 0;

        } else{

            std::cout << "\n ERROR \n";
            std::cout << "Please make sure you enter the correct input, 'y', 'Y', 'N', or 'n' are the only acceptions.\n\n";

        }


    } while (users_replay_choice != "N" || users_replay_choice != "n");

    
    return 0;

    // find out why vector is only printing index 4 of 14 jokes.
}