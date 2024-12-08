#pragma once
#include <string>

class Squirrel {
  public:
    Squirrel(std::string name) {
      this->name = name;
    }

    std::string get_name() {
      return this->name;
    }
    
    private:
    std::string name;
};
