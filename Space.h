//
// Created by tamir on 2019/09/08.
//

#ifndef AS4_SPACE_H
#define AS4_SPACE_H
#include <vector>
#include <ostream>
#include "Instance.h"

using namespace std;


class Space {
    vector<Instance> instances;
public:
    Space(const vector<Instance> &instances);

    void remove(const Instance &instance);
    
    void generalise(const Instance &instance);

    void specialise(const Instance &instance, const Instance &specific);

    friend ostream &operator<<(ostream &os, const Space &space);
};



#endif //AS4_SPACE_H
