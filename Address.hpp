#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include "Word.hpp"

struct Address : public Word {
  Word address();
  Word address() const;
  Word displacement();
  Word displacement() const;
  Word page();
  Word page() const;
  Word frame();
  Word frame() const;
};

#endif