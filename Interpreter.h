//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_INTERPRETER_H
#define UNTITLED1_INTERPRETER_H


#include <string>
#include <list>
#include <map>
#include <iostream>

#include "VarData.h"
#include "Command.h"
#include "CommandFactory.h"
#include "ExpsCollection.h"
#include "Threads.h"
#include "CommandExpression.h"
#include "LexerParser.h"

class Interpreter {
    map<string, VarData *> symTbl;
    CommandFactory *factory;
    ExpsCollection *expressions;
    map<string, string> codeMap;
    Threads *threads;

public:
    Interpreter();

    ~Interpreter();

    vector<string> lexer(string input);

    void parser(vector<string> input);
};


#endif //UNTITLED1_INTERPRETER_H
