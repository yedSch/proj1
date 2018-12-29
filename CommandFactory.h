//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_COMMANDFACTORY_H
#define UNTITLED1_COMMANDFACTORY_H


#include <map>
#include <list>
#include <iostream>
#include "VarData.h"
#include "ExpsCollection.h"
#include "Threads.h"
#include "Command.h"

class CommandFactory {
    map<string, VarData *> *symbolTable;
    map<string, string> cmdMap;
    Threads *threads;

public:
    CommandFactory(map<string, VarData *> *symbolTable, map<string, string> &compMap, Threads *threads);

    Command *createCommand(vector<string> &code);
};


#endif //UNTITLED1_COMMANDFACTORY_H
