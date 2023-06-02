# include <iostream>
# include <string>

/**
 * Author: LeeTuah
 * Program: Character Reversal of String
 * For: League Against Genesis, Thunder, Kingmakers and Immortals
 * Date: June 2, 2023
*/

// main program execution starts from here
int main(int argc, char** argv){
    // variable declaration
    std::string str, new_str;

    // asking user for the string
    std::cout << "Enter your string: ";
    std::getline(std::cin, str);

    // generating the new string by flipping the previous one
    new_str = std::string(str.rbegin(), str.rend());

    // printing the new string
    std::cout << "\nThe new string is " << new_str;
}
