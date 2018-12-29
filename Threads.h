//
// Created by yedaya on 12/25/18.
//

#ifndef UNTITLED1_THREADS_H
#define UNTITLED1_THREADS_H


#include <thread>
#include <sys/types.h>
#include <vector>

using namespace std;


class Threads {
    vector<thread *> threads;

public:
    void addThread(thread *t);

    ~Threads();
};
#endif //UNTITLED1_THREADS_H
