#include "Condition.h"

Condition::Condition() : Node() {

}

Condition::~Condition() {
    delete action;
}