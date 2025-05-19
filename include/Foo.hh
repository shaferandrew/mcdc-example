#ifndef EXAMPLE_Foo_HH
#define EXAMPLE_Foo_HH

#include "TrackedValue.hh"

namespace example {

class Foo {
  public:
    Foo();
    
  private:
    TrackedValue<double> value{1};
};

}

#endif
