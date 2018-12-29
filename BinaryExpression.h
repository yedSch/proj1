//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_BINARYEXPRESSION_H
#define UNTITLED1_BINARYEXPRESSION_H

#include "Expression.h"

class BinaryExpression :public Expression {
protected:
    Expression *right;
    Expression *left;

public:
    BinaryExpression(Expression *left, Expression *right);

    virtual double calculate() = 0;

    ~BinaryExpression() override;
};




#endif //UNTITLED1_BINARYEXPRESSION_H
