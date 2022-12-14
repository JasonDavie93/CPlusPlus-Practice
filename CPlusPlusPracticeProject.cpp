// CPlusPlusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>//Used to seed rand
#include <vector>
#include<stdlib.h> //To use rand()

/*void BasicFunction() {
    std::cout << "Basic Function ran! \n";
}*/

/*void RandomNumber()
{
    //Gets the current time and sets the random seed
    srand(time(NULL));
    //Min and max scores possible
    int minScore = 0;
    int maxScore = 100;
    //For loop to generate 5 random numbers
    for (int i = 1; i < 6; ++i)
    {
        //Calculates a range between two numbers
        int range = maxScore - minScore;
        int randomRange = minScore + std::rand() % range;
        //Prints random numbers
        std::cout << "Player " << i  << ": " << randomRange << "\n";
    }
    
}*/
//There exists a function called EarlyDeclare
//This is called a Forward Declaration
//void EarlyDeclare();

/*void ParameterFunc(int paramInt)
{
    ++paramInt;
    std::cout << "ParameterFunc ran - paramInt = " << paramInt <<  "\n";
}*/


/*int ReturnFunc()
{
    return 42;
}*/

/*
//Function for accepting parameters and calculates the area of a rectangle
void CalculateRectangle()
{

    int lengthRec;
    int widthRec;
    
    std::cout << "Please enter a Length: (cm) \n";
    std::cin >> lengthRec;
    std::cout << "Please enter a Width: (cm) \n";
    std::cin >> widthRec;
    int areaRec = (lengthRec * widthRec);
    std::cout << "Length = " << lengthRec << "cm\n"
        << "Width = " << widthRec << "cm\n"
        << "Area = " << areaRec << "cm^2\n";
}
*/

int main()
{
    //Calls RandomNumber() Function
    //RandomNumber();
    /*
    CalculateRectangle();

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




    BasicFunction();


        //SELECTION
        bool boolCheck = true;
        int decision = 5;

        if (decision == 0)
        {
            std::cout << "Decision was 0! \n";
        }
        else if (decision == 1 && boolCheck == false)
        {
            std::cout << "Decision was 1!\n";
        }
        else if (decision == 2)
        {
            std::cout << "Decision was 2!\n";
        }
        else
        {
            std::cout << "Decision was not 0 or 1 or 2!\n";
        }

        int errorCode = 2;

        switch (errorCode)
        {
        case 0:
        {
            std::cout << "Error was 0! \n";
           break;
        }
        case 1:
        {
            std::cout << "Error was 1! \n";
            break;
        }
        case 2:
        {
            std::cout << "Error was 2 ! \n";
            break;
        }
        default:
        {
            std::cout << "Error was unrecognized! \n";
            break;
        }


        //Which Way? :Asks the user which direction they wish to go out of 4 options, numbering
        //Each option 1-4. Describe a scene unique to options they chose.

        //Prints the users choice of location and asks for an input
        std::cout << "Please choose one of the following directions: " << std::endl
            << "1 . North" << std::endl << "2.East" << std::endl << "3.South" << std::endl << "4.West" << std::endl;
        int choice = 0;
        std::cin >> choice;


        //Prints one of the following statements depending on the users choice
        switch (choice)
        {
        case 1:
        {
            std::cout << "You chose North, Its raining and the locals are miserable! \n";
            break;
        }
        case 2:
        {
            std::cout << "You chose East, You found yourself in the middle of a desert with no water......is that an island in the distance? \n";
            break;
        }
        case 3:
        {
            std::cout << "You chose South \n";
            break;
        }
        case 4:
        {
            std::cout << "You chose West \n";
            break;
        }
        default:
        {
            std::cout << "You chose an invalid direction!! What a silly bugger! \n";
            break;
        }



        //Iteration

        //While loops are the same in C++ and C#
        bool whileB = true;
        //To enter this loop, this condition must be true
        while (whileB == true)
        {
            //Do the body of the loop
            whileB = false;
            //At the end we check the condition, if it is still true, we loop again
        }

        int doI = 3;

         do
         {
             ++doI;
             std::cout << "Do while ran " << doI << " times! \n";

         } while (doI < 2);


         int outerI = 0;
         for (int i = 0; i < 5; ++i)
         {
             //Do the body of the loop
             std::cout << "For loop ran " << i << " times! \n";
         }


    //Example Program - Goooooooogle - Store a variable for the number of pages of search results. Create a string
    //of the word "google", but where there a number of o equal to the number of page results. Print the resulting string

    int searchResults = 5;
    std::string google = "G";
    for (int i = 0; i < searchResults; ++i)
    {
        google += "o";
    }

    google += "gle";

    std::cout << google << std::endl;

    */

    /*
        EarlyDeclare();

        int testInt = 4;
        //Like saying paramInt = 4
        ParameterFunc(testInt);
        std::cout << "testInt = " << testInt << "!\n";

        int returnValue = ReturnFunc();
        std::cout << "returnValue = " << returnValue << "!\n";*/

       /* //Generate a random number
        //Generate anywhere from 0 to RAND_MAX(Very very large)
    int totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    int totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    int totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    
    //The seed is a starting point for the random calculations
    //int seed = 100;
    std::srand(time(NULL));
    //Between two numbers
    int lowerNumber = 50;
    int upperNumber = 150;
    int range = upperNumber - lowerNumber;
    
    int seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
    seededRandom = std::rand() % range + lowerNumber;
    std::cout << "Seeded random number is: " << seededRandom << "\n";
   */

    /*Static Array
    int intArray[] = { 0, 1, 2 };
    const int intArraySize = 3;
    int intArrayB[intArraySize];
    */
    /*
        //To declare a vector
        std::vector<int> intVector;

        //We can add items to vector using a function called
        //push_back() and it adds, no surprise, to the back
        //(end) of the vector

        intVector.push_back(1); //Vector = {1}
        intVector.push_back(2); //Vector = {1,2}
        intVector.push_back(36); //Vector = {1, 2 , 36}
        intVector.push_back(40); //Vector = {1, 2 , 36, 40}
        intVector.push_back(111); //Vector = {1, 2 , 36, 40 ,111}


        //You can get the current size of the vector
        //Using vectorName.Size()
        std::cout << "Vector is " << intVector.size() << "\n";

        //You can access items in a vector just like an array
        //Using square brackets
        std::cout << "Vector index 1 is " << intVector[1] << "\n";

        //Change the value of an item
        //(Just like an array)
        //BE CAREFUL - The element must already exist
        intVector[1] = 5;
        std::cout << "Vector index 1 is " << intVector[1] << "\n";

        //Items can be removed using the erase() function
        //Erase uses iterators
        //An iterator is like  a marker for a particular point
        //in the vector

        //Let's erase the first two elements
        //Parameter 1 - starting point
        //parameter 2 - end before this point
        //Vector = {1, 2, 36, 40 , 111}
        //intVector.erase(intVector.begin(), intVector.begin() + 2);
        std::cout << "Vector is " << intVector.size() << "\n";
        std::cout << "Vector index 0 is " << intVector[0] << "\n";


        //Initialisation -> set up i as an integar
        //Condition -> When do we stop? compare i to vectorName
        //Increment -> 1
        for (int i = 0; i < intVector.size(); ++i)
        {
            std::cout << "Vector index " << intVector[i] << "\n";
        }

        */





        //Implementation for EarlyDeclare that was declared at the top
        //Name must match exactly
        /*void EarlyDeclare()
        {
            std::cout << "Early Declare function ran! \n";
        }*/

        //Advanced if statement: Ternary
        //Written in line with other code such as assignment statements
        //It returns in one of two values based on the condition
        //int ternResult = decision ? 1 : 2;



        /*
         //Practice C++ HomeWork Problems

        //1. Variables - Rectangle Info - Find the perimeter and area of a rectangle, given the length and width.
        //Store each value as a variable, and print the results to the console.

        //Variables for length and width
        int length;
        int width;

        //Asks the user to enter the length of the rectangle
        std::cout << "Enter the length of the rectangle (cm)";
        std::cin >> length;
        //Asks the user to enter width of the rectangle
        std::cout << "Enter the width of the rectangle (cm)";
        std::cin >> width;

        //Adds the length and the width together and multiplies the answer by
        //two to get the perimeter of the rectangle
        int perimeter = (length + width) * 2;
        //Multiplies the length and the width for the area of the rectangle
        int area = length * width;

        //Prints the length, width, perimeter and area of the rectangle
        std::cout << "Length = " << length << std::endl
        << "Width = " << width << std::endl
        << "Perimeter = " << perimeter << std::endl
        << "Area = " << area << std::endl;



        //2. Variables - Time Conversions - Create a variable to represent a number of hours. Convert this
        //variable to a number of minutes, then a number of seconds. Print the result. Try the reverse.
        //Think about the kinds of variables you should use!

        //Variable for hours
        int hours;
        //Asks the user to enter how many hours they'd like to convert
        std::cout << "Enter hours:  \n";
        std::cin >> hours;
        //Converts the hours to minutes and then, minutes to seconds
        int minutes = (hours * 60);
        int seconds = (minutes * 60);
        //Prints the hours the user entered and how many minutes & seconds it equals
        std::cout << "Hours: " << hours << "hrs" << std::endl
        << "Minutes: " << minutes << "mins" << std::endl
        << "Seconds: " << seconds << "s" << std::endl;


        //Asks user to enter seconds
        std::cout << "Please enter how many seconds you'd like to convert as a decimal. (e.g 1 second = 1.0) ";
        float seconds;
        std::cin >> seconds;
        //Converts seconds to minutes e.g 1 seconds = 0.0167 minutes
        float minutes = (seconds * 0.0167);
        //converts minutes to hours e.g 1 minute = 0.0167 hours
        float hours = (minutes * 0.0167);
        //Printes the seonds enter & the converted minutes & hours
        std::cout << "Seconds: " << seconds << "seconds" << std::endl
        << "Minutes: " << minutes << "minutes" << std::endl
        << "Hours: " << hours << "hours" << std::endl;



        //3. Strings - Insult Generator - Store an insult of your choice in a string variable.
        //Store the string "You are a " in another string variable. Concatenate the strings,
        //store the resulting message in a new variable, and print it out.
        //Bonus: Add more than one insult to the string.

        //Variables for Strings
        std:: string insult1 = "idiot";
        std:: string sentence1 = "You are an";
        std:: string sentence2 = "and also, you smell like";
        std::string insult2 = "poo";
        //Concatenates the sentences
        std::string fullSentence = sentence1 + " " + insult1 + "\n"
        + sentence2 + " " + insult2 + "!\n";
        //Prints out full sentence on screen
        std::cout << fullSentence;


        //4. Strings - Code Word Locator - Store a codeword as a string variable.
        // Create a longer string variable that contains the codeword.
        //Search for the codeword in the string, and print out it's position in the string.
        //Sentence and specified code word
        std::string sentence3 = "Frankly, my dear, I don't really give a damn.";
        std::string codeWord = "I";
        //Prints full sentence on screen
        std::cout << sentence3 << '\n';
        //Searches the string for the specified code word
        std::size_t spacePos = sentence3.find(codeWord);
        //If the code word is found within the sentence, it will store its position as variable
        if (spacePos != std::string::npos)
            //Prints the position of the codeword within the sting
            std::cout << "Codeword found at: " << spacePos << '\n';


        //5. Input - Date of Birth -  Ask the player for their Year, Month, and Day of birth.
        //Store each in an appropriate variable, then print them out together.

        //Asks the user to enter which year they were born as an int
        int year;
        std::cout << "Please enter the year you were born (format: 1993).\n";
        std::cin >> year;
        //Asks the user to enter which month they were born as a string
        std::cout << "Please enter the month you were born (format: March) \n";
        std::string month = "";
        std::cin >> month;
        //Asks the user to enter which day they were born as an int
        int day;
        std::cout << "Please enter the day you were born. (format: 05) \n";
        std::cin >> day;
        //Outputs the users dob e.g 5/March/1993!
        std::cout << "Your dob is:  " << day << "/" << month <<"/" << year << "!\n";

        */

        //C++ Practice Questions week 2


        /*
        //6. Selection - Swear Bleeper - Store a "bad" word (it could be anything) in a string variable.
        //Ask the player to enter a single word. Compare if the word they entered is the same as the bad word,
        //and if it is, print out the word "BLEEP". If it is NOT the same, print out the word the player entered.

        //Asks the user to enter a swear word
        std::cout << "Please enter your swear word \n";
        std::string swear = " ";
        std::cin >> swear;
        //If the users input matches the specified swear word
        if (swear == "fuck" || swear == "Fuck")
        {
            //Prints "Bleep!"
            std::cout << "Bleep!\n";
        }
        else //Otherise
        {
            //Prints the users input
            std::cout << swear << "!\n";
        }




        //7. Iteration - Bottles of Beer on the Wall - Read an input for a number of bottles of beer to have on the wall.
        //Ask the user if they would like to drink a bottle. If they do, print the corresponding lyrics to ?99 bottles of beer on the wall?,
        //but with the input number of beers on the wall, which is then decreased by 1. Repeat until they stop drinking or run out of beer.

        //Variable for initial bottle inout
        int bottles;
        std::cout << "How many bottles of beer are on the wall? \n";
        std::cin >> bottles;
        //Asks the player how many bottles are on the wall
        if (bottles > 0 && bottles <= 99)
        {
            //Asks the player if they'd like to drink one,
            //if no, the program will close
            //If yes, the program will print the lyrics on the screen
            std::cout << "Would you like to drink one? Y/N? \n";
            std::string answer = " ";
            std::cin >> answer;

            bool drink = true;
            //if the user answers yes, the program will print the lyrics of the song using the users input of bottles
            if (answer == "y" || answer == "Y")
            {
                drink = true;
                while (drink == true)
                {
                    //Subtracts a bottle when one is taken down
                    int bottles2 = (bottles - 1);
                    //Prints the lyrics and the users amount of bottles they specified
                    std::cout << bottles << " bottles of beer on the wall," << bottles << " bottles of beer. \n"
                        << " Take one down and pass it around. " << bottles2 << " bottles of beer on the wall. \n";

                   //Asks the user if they'd like to continue
                    std::cout << "Would you like to drink one? Y/N? \n";
                    std::string answer = " ";
                    std::cin >> answer;

                }
                drink = false;
            }
            */

            //8. Functions: Rectangle Area - Mark II. Write a function to calculate the area of a rectangle, based on parameters passed in for width and height. 
            //It should return the value back to the calling code. Call this function in main, and print the result.

            //******* ABOVE IN CODE *******


            //9. Randomisation: Random Score. Write a function to create a random score for a fake player. The function should accept a 
            //minimum and maximum score, and return the resulting random score. The calling code should then call this function five times, 
            //printing the result each time. Every time this program is run, these scores should be different.


            //******** ABOVE IN CODE *******




            //10. Vectors: Who?s In Your Party. Write a program to read in the names for a player?s adventuring party, which can have any number of 
            //party members. Each party member?s name should be stored separately in an array or vector. 
            //Print them out when the player is done entering the names.

    /*std::string firstNameParty;
    std::string secondNameParty;

    std::string partyList[5];
    for (int i = 0; i < 5; ++i)
    {

        //Prints random numbers
        std::cout << "Please Enter Party Members first name: \n";
        std::cin >> firstNameParty;
        std::cout << "Please Enter Party Members second name: \n";
        std::cin >> secondNameParty;
    }
    }*/



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
    