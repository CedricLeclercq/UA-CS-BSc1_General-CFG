//
// Created by Cédric Leclercq on 08/10/2021.
//

#include "CFG.h"
#include <iostream>

using namespace std;

void CFG::createExampleCFG() {
    // Used by the constructor to create the CFG for the first assignment
    this->variables = {"BINDIGIT", "S"};
    this->terminals = {"0", "1", "a", "b"};
    vector<string> prod1 = {""};
    vector<string> prod2 = {"a","S","b","BINDIGIT"};
    vector<string> prod3 = {"0"};
    vector<string> prod4 = {"1"};
    this->productions.emplace_back("BINDIGIT", prod3);
    this->productions.emplace_back("BINDIGIT", prod4);
    this->productions.emplace_back("S", prod1);
    this->productions.emplace_back("S",prod2);
    this->start = "S";
}
void CFG::print() {
    // Printing variables
    cout << "V = {";
    for (const auto& element: this->variables) {
        cout << element; // Print element
        if (element != this->variables.back()) cout << ", "; // Add the comma except at the end
        else cout << "}" << endl; // Add the end of the vector to the end
    }
    // Printing terminals
    cout << "T = {";
    for (const auto& element: this->terminals) {
        cout << element; // Print element
        if (element != this->terminals.back()) cout << ", "; // Add the comma except at the end
        else cout << "}" << endl; // Add the end of the vector to the end
    }
    // Printing productions
    cout << "P = {" << endl;
    for (const auto& element: this->productions) {
        // Printing all replacements
        cout << "\t" << element.first << " -> '";
        for (const auto& replacement: element.second) {
            cout << replacement;
            if (replacement != element.second.back()) cout << ", "; // Add the comma except at the end
            else cout << "'" << endl; // Add the end of the vector to the end
        }
    } cout << "}" << endl;

    // Printing start
    cout << "S = " << this->start;
}


