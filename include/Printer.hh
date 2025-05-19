#ifndef EXAMPLE_Printer_HH
#define EXAMPLE_Printer_HH

namespace example {

/** provides message printing services */
class Printer {
  public:
    static void publish(std::string text);
};

}

#endif
