#include "queuetees.hpp"
#include <iostream>
using namespace std;

QueueTees::QueueTees()
    : front(0), back(0), count(0) {}

void QueueTees::enqueue(Cutie &c) {
   if (count == MAX_SIZE) {
      cout << "Queue is full!" << endl;
      return;
   }
   arr[back] = &c;
   back = (back + 1) % MAX_SIZE;
   count++;
}

Cutie* QueueTees::dequeue() {
   if (count == 0) {
      cout << "Queue is empty!" << endl;
      return nullptr;
   }
   Cutie* result = arr[front];
   front = (front + 1) % MAX_SIZE;
   count--;
   return result;
}

int QueueTees::size() const {
   return count;
}
