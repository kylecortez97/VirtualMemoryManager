#include "Address.hpp"
#include "Configuration.hpp"

Word Address::address() {
  return { value_ & MASK_FOR_ADDRESS };
}

Word Address::displacement() {
  return { address() & MASK_FOR_DISPLACEMENT };
}

Word Address::page() {
  return { (address() & MASK_FOR_PAGE) >> NUMBER_OF_DISPLACEMENT_BITS };
}

Word Address::frame() {
  return { 0 }; // Change...
}