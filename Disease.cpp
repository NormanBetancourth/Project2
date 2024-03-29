//
// Created by rebec on 19/5/2021.
//

#include "Disease.h"

Disease::Disease(const string &name, const string &ADNsequence) :
name(name), ADNsequence(ADNsequence) {}

Disease::~Disease() {

}

const string &Disease::getName() const {
    return name;
}

const string &Disease::getAdNsequence() const {
    return ADNsequence;
}

void Disease::setName(const string &name) {
    Disease::name = name;
}

void Disease::setAdNsequence(const string &ADNsequence) {
    Disease::ADNsequence = ADNsequence;
}

string Disease::toString() const {
    stringstream ss;
    ss << "\n\tName: " << getName();
    ss << "\n\tADN sequence: " << getAdNsequence();
    return ss.str();
}
