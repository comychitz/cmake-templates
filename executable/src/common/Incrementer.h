#ifndef _INCREMENTER_H_
#define _INCREMENTER_H_

class Incrementer 
{
  public:
    Incrementer() : val_(0) {  }

    ~Incrementer() {  }

    void inc() { val_++; }

    int val() { return val_; }

  private:
    int val_;
};

#endif
