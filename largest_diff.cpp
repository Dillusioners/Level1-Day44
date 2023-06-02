# include <iostream>
# include <algorithm>
# include <vector>

// main program execution starts from here
int main(int argc, char** argv){
    // variable declaration
    std::vector<int> vec;
    int count, input;

    // asking user for the total count of integers
    std::cout << "How many integers to calculate? ";
    std::cin >> count;

    // iterating for the given count of times
    for(int i = 1; i <= count; i++){
        // asking user for the integer and then pushing it into the vector
        std::cout << "Enter integer no. " << i << ": ";
        std::cin >> input;
        vec.push_back(input);
    }

    // sorting the vector
    std::sort(vec.begin(), vec.end());

    // calculating the difference and printing it
    std::cout << "The difference is " << vec.back() << " - " << vec.front() << " = " << vec.back() - vec.front();
}
