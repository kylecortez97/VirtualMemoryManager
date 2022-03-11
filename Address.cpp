#include "Address.hpp"
#include "Configuration.hpp"

Word Address::address() {
  return { value_ & MASK_OF_ADDRESS };
}

Word Address::address() const {
  return { value_ & MASK_OF_ADDRESS };
}

Word Address::displacement() {
  return { address() & MASK_OF_DISPLACEMENT };
}

Word Address::displacement() const {
  return { address() & MASK_OF_DISPLACEMENT };
}

Word Address::page() {
  return { (address() & MASK_OF_PAGE_NUMBER) >> NUMBER_OF_DISPLACEMENT_BITS };
}

Word Address::page() const {
  return { (address() & MASK_OF_PAGE_NUMBER) >> NUMBER_OF_DISPLACEMENT_BITS };
}