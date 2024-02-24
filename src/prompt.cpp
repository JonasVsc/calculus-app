//
// Created by jonasv on 24/02/24.
//

#include "prompt.h"

namespace prt {


    void prompt::display(const std::string& result) {
        std::cout << "Result: " << result << std::endl;
    }

    void prompt::caller(std::string& input) {
        // select operator...

        display(input);
    }

    void prompt::listen() {
        std::string userInput {};

        std::getline(std::cin, userInput);

        if(userInput == "-1") {
            exit = true;
            return;
        }

        caller(userInput);
    }

    bool prompt::appShouldClose() const {
        return exit;
    }
} // calc