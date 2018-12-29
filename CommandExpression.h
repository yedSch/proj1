//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_COMMANDEXPRESSION_H
#define UNTITLED1_COMMANDEXPRESSION_H


#include "Expression.h"
#include "Command.h"

class CommandExpression : public Expression {
    Command *command;

public:
    explicit CommandExpression(Command *command);

    double calculate() override;

    ~CommandExpression();
};
#endif //UNTITLED1_COMMANDEXPRESSION_H
