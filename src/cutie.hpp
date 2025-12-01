#pragma once
#include <string>
using namespace std;

class Cutie {
protected:
    string description;
    int cuteness_rating;

public:
    Cutie(string description, int cuteness_rating)
        : description(description), cuteness_rating(cuteness_rating) {}

    virtual string get_description() = 0;
    virtual int get_cuteness_rating() = 0;

    virtual ~Cutie() {}
};
