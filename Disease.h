//
// Created by rebec on 19/5/2021.
//

#ifndef PROJECT2_DISEASE_H
#define PROJECT2_DISEASE_H
#include<iostream>
#include<sstream>
using namespace std;

class Disease {
private:
    string name;
    char *ADNsequence;
public:
    Disease(const string &, char *);
    virtual ~Disease();

    const string &getName() const;
    char *getAdNsequence() const;
    void setName(const string &);
    void setAdNsequence(char *);

    string toString() const;

};


#endif //PROJECT2_DISEASE_H
