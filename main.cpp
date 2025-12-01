#include <iostream>
#include "src/Queuetees.hpp"

using namespace std;

class Puppy : public Cutie {
public:
  Puppy() : Cutie("Fluffy puppy", 10) {}
  string get_description() override { return description; }
  int get_cuteness_rating() override { return cuteness_rating; }
};

class Kitty : public Cutie {
public:
  Kitty() : Cutie("Adorable kitty", 9) {}
  string get_description() override { return description; }
  int get_cuteness_rating() override { return cuteness_rating; }
};

class PygmyMarmoset : public Cutie {
public:
  PygmyMarmoset() : Cutie("Tiny pygmy marmoset", 12) {}
  string get_description() override { return description; }
  int get_cuteness_rating() override { return cuteness_rating; }
};

int main() {
  Puppy puppy;
  Kitty kitty;
  PygmyMarmoset marmoset;

  QueueTees queue;

  cout << queue.size() << endl;

  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);

  cout << queue.size() << endl;

  cout << queue.dequeue()->get_description() << endl;
  cout << queue.dequeue()->get_description() << endl;
  cout << queue.dequeue()->get_description() << endl;

  return 0;
}
