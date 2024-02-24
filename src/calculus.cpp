//
// Created by jonasv on 24/02/24.
//

#include "calculus.h"

namespace calc {


    void calculus::display(const std::string& result) {
        std::cout << "Result: " << result << std::endl;
    }

    void calculus::caller(std::string& input) {
        // select operator...

        display(input);
    }

    void calculus::listen() {
        std::string userInput {};
        std::cin >> userInput;

        if(userInput == "-1") {
            exit = true;
            return;
        }

        caller(userInput);
    }

    bool calculus::appShouldClose() const {
        return exit;
    }
} // calc