//
// Created by jonasv on 24/02/24.
//
#include"prompt.h"

int main()
{
    prt::prompt app;

    while(!app.appShouldClose())
    {
        app.listen();
    }

    return 0;
}