#include "CRInRacetrack.h"
#include "ASetObjetive.h"
#include"AMoveToObjetive.h"

CRInRacetrack::CRInRacetrack(i32 newRepeat, AICar* newCar) : ConditionRepeat(newRepeat, newCar) {
    actions.push_back(new ASetObjetive());
    actions.push_back(new AMoveToObjetive());
}

CRInRacetrack::~CRInRacetrack() {
    
}