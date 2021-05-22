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
    string ADNsequence;
public:
    Disease(const string & = "Undefined", const string & = "Undefined");
    virtual ~Disease();

    const string &getName() const;
    const string &getAdNsequence() const;
    void setName(const string &);
    void setAdNsequence(const string &);

    string toString() const;

};


#endif //PROJECT2_DISEASE_H
