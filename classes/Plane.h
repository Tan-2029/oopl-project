#include <iostream>
using namespace std;

#ifndef PLANE_H
#define PLANE_H


class Plane {
private:
    // Data
    int id;
    int actualTime;
    int scheduledTime;
    bool isLanded;
    //introduce isTakenOff ?
    
public:

    // Constructor
    Plane(int id, int aT, int sT);

    // Getter Functions
    int getId();
    int getActualTime();
    int getScheduledTime();
    bool getIsLanded();

    // Setter Functions
    void setId(int val);
    void setActualTime(int val);
    void setScheduledTime(int val);
    void setIsLanded(bool val);

    // Friend Functions
    friend void showPlane(Plane &p);
};

// Definitions of member functions and constructors, in order

Plane::Plane(int id, int aT, int sT)
    : id(id), actualTime(aT), scheduledT(sT), isLanded(false){}

int Plane::getId(){
    return id;
}

int Plane::getActualTime(){
    return actualTime;
}

int Plane::getScheduledTime(){
    return scheduledTime;
}

bool Plane::getIsLanded(){
    return isLanded;
}

void Plane::setId(int val){
    id = val;
}

void Plane::setActualTime(int val){
    actualTime = val;
}

void Plane::setScheduledTime(int val){
    scheduledTime = val;
}

void Plane::setIsLanded(bool val){
    isLanded = val;
}

void showPlane(Plane &p){
    cout << "id: " << p.id << '\n'
        << "actualTime: " <<  p.actualTime << '\n'
        << "scheduledTime: " <<  p.scheduledTime << '\n'
        << "isLanded: " <<  p.isLanded << '\n';
}

#endif
