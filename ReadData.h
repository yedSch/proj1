//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_READCODE_H
#define UNTITLED1_READCODE_H


#include <string>
#include <list>
#include <vector>
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

#include "Interpreter.h"

using namespace std;


class ReadData {

public:
    void readFromFile(string fileName);

    void readFromConsole();
};

#endif //UNTITLED1_READCODE_H
