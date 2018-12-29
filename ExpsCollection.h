//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_EXPCOLLECTION_H
#define UNTITLED1_EXPCOLLECTION_H


#include <iostream>
#include <list>
#include <typeinfo>
#include "Expression.h"

using namespace std;

class ExpsCollection {
    list<Expression *> expressions;

public:
    ExpsCollection();

    ~ExpsCollection();

    void addExpression(Expression *expression);

    void executeAll();

    void deleteAll();
};


#endif //UNTITLED1_EXPCOLLECTION_H
