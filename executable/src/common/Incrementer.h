#ifndef _INCREMENTER_H_
#define _INCREMENTER_H_

class Incrementer 
{
  public:
    Incrementer();

    ~Incrementer();

    void inc();

    int val();

  private:
    int val_;
};

#endif
