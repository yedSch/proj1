//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_COMMAND_H
#define UNTITLED1_COMMAND_H


class Command {
public:
    virtual void doCommand() = 0;

    virtual ~Command() = default;
};




#endif //UNTITLED1_COMMAND_H
