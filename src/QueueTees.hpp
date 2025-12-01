#pragma once
#include "cutie.hpp"

class QueueTees {
private:
    static const int MAX_SIZE = 10;
    Cutie* arr[MAX_SIZE];
    int front;
    int back;
    int count;

public:
    QueueTees();

    void enqueue(Cutie &c);
    Cutie* dequeue();
    int size() const;
};
