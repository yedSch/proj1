//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_CONDITIONCOMMAND_H
#define UNTITLED1_CONDITIONCOMMAND_H


#include "Command.h"

class ConditionCommand : public Command {

public:
    virtual void doCommand() override = 0;
};


#endif //UNTITLED1_CONDITIONCOMMAND_H
