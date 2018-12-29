//
// Created by yedaya on 12/25/18.
//

#include "VarData.h"


#include "VarData.h"

double VarData::getValue() {
    return this->value;
}

string VarData::getPath() {
    return this->path;
}

void VarData::setValue(double newValue) {
    this->value = newValue;

}

void VarData::setPath(string newPath) {
    this->path = move(newPath);
}

VarData::VarData(double value, string path) {
    this->value = value;
    this->path = move(path);
}