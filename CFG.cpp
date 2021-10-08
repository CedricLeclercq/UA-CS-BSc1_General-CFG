//
// Created by Cédric Leclercq on 08/10/2021.
//

#include "CFG.h"

void CFG::createExampleCFG() {
    // Used by the constructor to create the CFG for the first assignment
    this->variables = {"BINDIGIT", "S"};
    this->terminals = {"0", "1", "a", "b"};
    this->productions.emplace_back("S","");
    this->productions.emplace_back("S","a S b BINDIGIT");
    this->productions.emplace_back("BINDIGIT", "0");
    this->productions.emplace_back("BINDIGIT", "1");
    this->start = "S";
}
void CFG::print() {

}


