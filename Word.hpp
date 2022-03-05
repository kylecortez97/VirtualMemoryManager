#ifndef WORD_HPP
#define WORD_HPP

#include <cstdint>

struct Word {
  uint32_t value_;
  operator uint32_t();
};

#endif