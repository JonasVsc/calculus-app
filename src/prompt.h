//
// Created by jonasv on 24/02/24.
//
#include<iostream>


#ifndef PROMPT_APP_PROMPT_H
#define PROMPT_APP_PROMPT_H

namespace prt {

    class prompt {
    public:
        void listen();
        static void display(const std::string& result);
        static void caller(std::string& input);
        [[nodiscard]] bool appShouldClose() const;
    private:
        bool exit {false};

    };
} // calc

#endif //PROMPT_APP_PROMPT_H
