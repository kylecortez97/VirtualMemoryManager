#include "Address.hpp"
#include "Configuration.hpp"

Word Address::address() {
  const int ADDRESS_MASK = (1 << NUMBER_OF_ADDRESS_BITS) - 1;
  Word word;
  word.value_ = value_ & ADDRESS_MASK;
  return word;
}

Word Address::displacement() {
  const int DISPLACEMENT_MASK = (1 << NUMBER_OF_DISPLACEMENT_BITS) - 1;
  Word word;
  word.value_ = address() & DISPLACEMENT_MASK;
  return word;
}

Word Address::page() {
  // ...
}