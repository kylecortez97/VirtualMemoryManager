#ifndef RAM_HPP
#define RAM_HPP

#include <array>

#include "Configuration.hpp"
#include "Word.hpp"

class Ram : public std::array<uint8_t, NUMBER_OF_FRAMES> {
public:
  struct Status {
    bool dirty;
    bool accessed;
  };

  std::array<Status, SIZE_OF_FRAME> status;
  Ram(const Ram &) = delete;
  Ram &operator=(const Ram &) = delete;
  static Ram &instance();
  void read();
private:
  Ram();
};

#endif