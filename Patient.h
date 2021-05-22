//
// Created by rebec on 19/5/2021.
//

#ifndef PROJECT2_PATIENT_H
#define PROJECT2_PATIENT_H
#include<iostream>
#include<sstream>
using namespace std;
const int DESEASESIZE = 30;

class Patient {
private:
    string name;
    string id;
    string ADNsequence;
    string* deseasesArray;

public:
    Patient(const string & = "Undefined", const string & = "Undefined",
            const string & = "Undefined");
    virtual ~Patient();

    const string &getName() const;
    const string &getId() const;
    const string &getADNsequence() const;
    string *getDeseasesArray() const;

    void setName(const string &);
    void setId(const string &);
    void setADNsequence(const string &);

    string toString() const;
    string toStringDeseases() const;
};


#endif //PROJECT2_PATIENT_H
