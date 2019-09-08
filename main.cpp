#include <iostream>
#include "Instance.h"
#include "Space.h"

vector<Instance> data = {
        {{"Sunny", "Warm", "Normal", "Strong", "Warm", "Same"},   true},
        {{"Sunny", "Warm", "High",   "Strong", "Warm", "Same"},   true},
        {{"Rainy", "Cold", "High",   "Strong", "Warm", "Change"}, false},
        {{"Sunny", "Warm", "High",   "Strong", "Cool", "Change"}, true}

};

int main() {
    Space specific({{{"", "", "", "", "", ""},   true}});
    Space general({{{"?", "?", "?", "?", "?", "?"},   true}});

    for(Instance d: data){
        if(d.label){
            general.remove(d);
            specific.generalise(d);
        }else{

        }
    }

    return 0;
}