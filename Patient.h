//
// Created by rebec on 19/5/2021.
//

#ifndef PROJECT2_PATIENT_H
#define PROJECT2_PATIENT_H
#include<iostream>
#include<sstream>
using namespace std;

class Patient {
private:
    string name;
    string id;
    char *ADNsequence;
public:
    Patient(const string &, const string &, char *);
    virtual ~Patient();

    const string &getName() const;
    const string &getId() const;
    char *getADNsequence() const;

    void setName(const string &);
    void setId(const string &);
    void setADNsequence(char *);

    string toString() const;
};


#endif //PROJECT2_PATIENT_H
