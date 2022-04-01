#include "../include/printer.h"
#include <iostream>
#include <string>

int recursiveFunction(int);

int main()
{
    printer::print_string("Hello World 2");
    recursiveFunction(0);
    return 0;   
}

int recursiveFunction(int i)
{
    if(i < 10){
        std::cout << i << std::endl;
        recursiveFunction(++i);
    }
    return i;
}