//
// Created by rebec on 19/5/2021.
//

#include "Patient.h"

Patient::Patient(const string &name, const string &id, char *ADNsequence) :
    name(name), id(id), ADNsequence(ADNsequence) {}

Patient::~Patient() {
}

const string &Patient::getName() const {
    return name;
}

const string &Patient::getId() const {
    return id;
}

char *Patient::getADNsequence() const {
    return ADNsequence;
}

void Patient::setName(const string &name) {
    Patient::name = name;
}

void Patient::setId(const string &id) {
    Patient::id = id;
}

void Patient::setADNsequence(char *ADNsequence) {
    Patient::ADNsequence = ADNsequence;
}

string Patient::toString() const {
    stringstream ss;
    ss << "\tName: " << getName();
    ss << "\tId: " << getId();
    ss << "\tADN sequence: " << getADNsequence();
    return ss.str();
}
