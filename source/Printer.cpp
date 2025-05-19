#include "Printer.hh"

#include <cstdio>
#include <iostream>
#include <map>
#include <sstream>

namespace example {

void Printer::publish(std::string text) {
    std::cout << text << "\n";
}

}
