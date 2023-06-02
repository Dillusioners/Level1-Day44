# include <iostream>
# include <vector>
# include <random>

// main program execution starts from here
int main(int argc, char** argv){
    // variable declaration
    std::random_device rd;
    std::mt19937 mt(rd());
    unsigned long long total = 1;
    std::vector<int> vec;

    // filling the vector with 20 random number integers between 0 and 9
    for(int i = 0; i < 20; i++) vec.push_back(mt() % 10);

    // iterating through the vector
    for(auto i = vec.begin(); i != vec.end(); i++){
        // if the number is greater than 5, add it to the total
        if(*i > 5) total *= *i;
    }

    // printing the results
    std::cout << "The total product is " << total;
}
