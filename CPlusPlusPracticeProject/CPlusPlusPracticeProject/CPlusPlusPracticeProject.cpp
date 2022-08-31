// CPlusPlusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    /*
    //Examples of different variable types
    int testInt = 100;
    unsigned testUnsigned = 100u;
    float testFloat = 0.5f;
    double testDouble = 0.5;
    bool testBool = true;
    
    
    char testChar = 'c';

    //In C++, [] go after array name
    char firstNameOld[] = "Jason";

    std::string firstName = "Jason";
    std::string secondName = "Davie";


    
    //Can add strings together (concatenate) with
    // the + sign
    std::string fullName = firstName + " " + secondName;

   
    //can access characters in string as if string was an array
    char firstInitial = fullName[0];

    //Substr splits the string based on an
    //initial position and length
    std::string Initials = fullName.substr(0, 1);
    

    //Can find the position in the string and store it 
    //in a variable of type "std::size_t", Similar to int
    std::size_t spacePos = fullName.find(" ");
    

    //We can use the position to get the next substring
    Initials += fullName.substr(spacePos + 1, 1);
    
    
    //Example of output to console    

   

    std::cout << Initials << std::endl
        << fullName << std::endl
        <<firstInitial << std::endl;




    //Practice Strings
    std::string testString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Porta non pulvinar neque laoreet suspendisse interdum consectetur libero id. Ultrices in iaculis nunc sed augue.";
   
    std::string newString = testString.substr(0, 20);
    

    std::size_t spacePos2 = testString.find(" ");

    newString += testString.substr(spacePos2 + 1, 1);

    std::string breakText = testString + "\n";

    breakText += testString.substr(20, std::string::npos);

    std::cout << newString << std::endl
        << breakText << std::endl;


    //INPUT
    std::cout << "Please enter a word. \n";
    std::string entryString = "";
    
    //std::cin >> is used for input. The result of the console
    //input is stored in the variable to the right of the
    std::cin >> entryString;
    std::cout << "You typed " << entryString << "!\n";

    //Can also input to things that aren't strings
    int entryInt;
    std::cout << "Please enter a whole number.\n";
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << "!\n";

    //NOTE:If they enter something other than an int
    //The input will not "consume" the entry
    //This means it will be used again the next time
    //That cin is used - thus probably breaking your program
    //We should use data validation

    //We can also use floats
    int entryFloat;
    std::cout << "Please enter a number with a decimal point.\n";
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << "!\n";

    //By default cin only gets text up to the first space
    //You can get a whole line of text (inluding spaces)
    std::string lineOfText;
    std::cout << "Please enter a line of text.\n";
    std::getline(std::cin, lineOfText);
    std::cout << "You typed " << lineOfText << "!\n";
    */
    
    //SELECTION
    bool decision = true;
    
    if (decision == true)
    {
        std::cout << "Decision was True! \n";
    }
    else
    {
        std::cout << "Decision was False!\n";
    }

    //Advanced if statement: Ternary
    //Written in line with other code such as assignment statements
    //It returns in one of two values based on the condition
    int ternResult = decision ? 1 : 2;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
