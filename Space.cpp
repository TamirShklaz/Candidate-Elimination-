//
// Created by tamir on 2019/09/08.
//

#include "Space.h"

Space::Space(const vector<Instance> &instances) : instances(instances) {}

void Space::remove(const Instance &instance) {
    for(int i = 0; i < this->instances.size(); i++){
        if(!this->instances[i].satisfys(instance)){
            this->instances.erase(instances.begin()+i);
        }
    }
}

ostream &operator<<(ostream &os, const Space &space) {

    for(Instance i : space.instances){
        os << i  << " ";
    }
    return os;
}

void Space::generalise(const Instance &instance)  {
    for(int j = 0; j < this->instances.size(); j++){
        for(int i = 0; i < instance.vals.size(); i++){
            if(instances[j].vals[i] != instance.vals[i]){
                if(instances[j].vals[i] == ""){
                    instances[j].vals[i] = instance.vals[i];
                }else{
                    instances[j].vals[i] = "?";
                }
            }
        }
    }
}

void Space::specialise(const Instance &instance, const Instance &specific) {
    vector<Instance> temps;
    for(int j = 0; j < instance.vals.size(); j++){
        if(instance.vals[j] != specific.vals[j]){
            Instance temp({"?","?","?","?","?"}, true);
            temp.vals[j] = specific.vals[j];
            temps.push_back(temp);
        }
    }
}
