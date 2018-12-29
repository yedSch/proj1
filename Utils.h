//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_UTILS_H
#define UNTITLED1_UTILS_H

#include <string>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <utility>

#include "VarData.h"
#include "Expression.h"
#include "BinaryExpression.h"
#include "MathExpressions.h"


using namespace std;

class Utils {
public:
    bool isOperator(string str);

    string removeApostrophes(string str);

    list<string> minusToInt(list<string> lst);

    list<string> infixToPrefix(list<string> infix);

    list<string> placeValue(list<string> lst, map<string, VarData *> *symTbl);

    double prefixToDouble(list<string> prefix);

    double evaluate(list<string> &infix, map<string, VarData *> *symTbl);
};


#endif //UNTITLED1_UTILS_H
