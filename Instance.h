//
// Created by tamir on 2019/09/08.
//

#ifndef AS4_INSTANCE_H
#define AS4_INSTANCE_H

#include <string>
#include <vector>
#include <ostream>

using namespace std;

class Instance {

public:
    Instance(const vector<string> &vals, bool label);

    bool satisfys(const Instance &instance);

    friend ostream &operator<<(ostream &os, const Instance &instance);

public:
    vector<string> vals;


    bool label;
};

#endif //AS4_INSTANCE_H
