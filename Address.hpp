#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include "Word.hpp"

struct Address : public Word {
  Word address();
  Word displacement();
  Word page();
};

#endif