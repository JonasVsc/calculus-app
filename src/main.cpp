//
// Created by jonasv on 24/02/24.
//
#include"calculus.h"

int main()
{
    calc::calculus app;

    while(!app.appShouldClose())
    {
        app.listen();
    }

    return 0;
}