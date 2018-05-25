#include "Incrementer.h"

Incrementer::Incrementer() : val_(0) {  }

Incrementer::~Incrementer() {  }

void Incrementer::inc() { val_++; }

int Incrementer::val() { return val_; }

