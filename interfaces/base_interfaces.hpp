#ifndef BASE_INTERFACES_HPP
#define BASE_INTERFACES_HPP
#include <iostream>
using namespace std;

class iserializable{
public:
    virtual string to_string() const = 0;

};

class iview: public iserializable {
public:
  virtual ~iview() noexcept = default;
  virtual void update() =0;
};

#endif // BASE_INTERFACES_HPP
