//
// Created by yedaya on 12/25/18.
//

#include "CommandExpression.h"

double CommandExpression::calculate() {
    this->command->doCommand();
}

CommandExpression::CommandExpression(Command* command) {
    this->command = command;
}

CommandExpression::~CommandExpression() {
    delete this->command;
}