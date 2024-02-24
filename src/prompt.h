//
// Created by jonasv on 24/02/24.
//

#include<iostream>


#ifndef CALCULUS_APP_CALCULUS_H
#define CALCULUS_APP_CALCULUS_H

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

#endif //CALCULUS_APP_CALCULUS_H
