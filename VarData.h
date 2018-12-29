//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_VARDATA_H
#define UNTITLED1_VARDATA_H


#include <string>
#include "Threads.h"

using namespace std;

class VarData {
    double value;
    string path;

public:
    VarData(double value, string path);

    double getValue();

    string getPath();

    void setValue(double newValue);

    void setPath(string newPath);
};


#endif //UNTITLED1_VARDATA_H
