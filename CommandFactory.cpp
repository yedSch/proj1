//
// Created by yedaya on 12/25/18.
//


#include "CommandFactory.h"
#include "ConditionCommands.h"
#include "ClientServerCommands.h"
#include "PrintSlpCmnds.h"

CommandFactory::CommandFactory(map<string, VarData *> *symbolTable, map<string, string> &compMap, Threads* threads) {
    // init members
    this->symbolTable = symbolTable;
    this->threads = threads;
    this->cmdMap = compMap;
}

Command *CommandFactory::createCommand(vector<string> &code) {
    // index at code string arr
    int index = 0;

    // create open server command
    if (code[index] == "openDataServer") {
        return new OpenServerCommand(code, this->symbolTable, this->threads);

        // create client connect command
    } else if (code[index] == "connect") {
        return new ConnectCommand(code, this->symbolTable, this->threads);

        // create define var command
    } else if (code[index] == "var") {
        return new DefineVarCommand(code, this->symbolTable);

        // create loop command
    } else if (code[index] == "while") {
        return new LoopCommand(code, this, this->symbolTable, this->cmdMap);

        // create if command
    } else if (code[index] == "if") {
        return new IfCommand(code, this, this->symbolTable, this->cmdMap);

        // create sleep command
    } else if (code[index] == "sleep") {
        return new SleepCommand(code, this->symbolTable);

        // create print command
    } else if (code[index] == "print") {
        return new PrintCommand(code, this->symbolTable);

        // create print command
    } else if (code[index] == "entrc") {
        return new EntrcCommand();

        // create placement command
    } else if (code[index+1] == "=") {
        return new ReplaceCommand(code, this->symbolTable);
    }

    return nullptr;
}