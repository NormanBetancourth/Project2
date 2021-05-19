//
// Created by rebec on 19/5/2021.
//

#include "Disease.h"

Disease::Disease(const string &name, char *ADNsequence) :
name(name), ADNsequence(ADNsequence) {}

Disease::~Disease() {

}

const string &Disease::getName() const {
    return name;
}

char *Disease::getAdNsequence() const {
    return ADNsequence;
}

void Disease::setName(const string &name) {
    Disease::name = name;
}

void Disease::setAdNsequence(char *ADNsequence) {
    Disease::ADNsequence = ADNsequence;
}

string Disease::toString() const {
    stringstream ss;
    ss << "\tName: " << getName();
    ss << "\tADN sequence: " << getAdNsequence();
    return ss.str();
}
