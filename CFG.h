//
// Created by Cédric Leclercq on 08/10/2021.
//

#ifndef GENERAL_CFG_CFG_H
#define GENERAL_CFG_CFG_H

#include <vector>
#include <string>

class CFG {
protected:

    // Member variables
    std::vector<std::string> variables;
    std::vector<std::string> terminals;
    std::vector<std::pair<std::string, std::string>> productions;
    std::string start;

    // Member functions
    void createExampleCFG();

public:
    CFG() {
        // According to the assignment, the default constructor should create the given CFG in the assignment


    }

    CFG(const std::vector<std::string>& newVariables, const std::vector<std::string>& newTerminals,
        const std::vector<std::pair<std::string, std::string>>& newProductions, const std::string& newStart) {
       // This is a constructor to create any CFG
       this->variables = newVariables;
       this->terminals = newTerminals;
       this->productions = newProductions;
       this->start = newStart;
    }
    void print();
};


#endif //GENERAL_CFG_CFG_H
