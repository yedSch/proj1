//
// Created by yedaya on 12/25/18.
//

#include "BinaryExpression.h"


BinaryExpression::BinaryExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

BinaryExpression::~BinaryExpression() {
    delete this->right;
    delete this->left;
}