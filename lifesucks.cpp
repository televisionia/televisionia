#include <iostream>
#include <string>

int main() {
    std::cout << "My life sucks." << "\n";

    std::string userinput;
    std::getline(std::cin, userinput);

    if (userinput == "No it doesn't!") {
        std::cout << "Huh, I guess you're right.";
    } else if (userinput == "Yeah, it does.") {
        std::cout << "Yeah, I hate it.";
    }

    return 0;
} /* Televisionia | Tevo */