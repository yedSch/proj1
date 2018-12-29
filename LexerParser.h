//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_LEXERPARSER_H
#define UNTITLED1_LEXERPARSER_H

#include "CommandFactory.h"
#include "CommandExpression.h"


class Lexer {
public:
    vector<string> lexer(string input);
};

class Parser {
public:
    void parse(vector<string> &code, ExpsCollection* expressions,
               CommandFactory* factory, map<string,string> &codeMap);
};

#endif //UNTITLED1_LEXERPARSER_H
