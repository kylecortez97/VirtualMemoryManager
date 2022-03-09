#include "Address.hpp"
#include "Configuration.hpp"
#include "ProcessControlBlock.hpp"

Word Address::address() {
  return { this->value_ & MASK_FOR_ADDRESS };
}

Word Address::displacement() {
  return { this->value_ & MASK_FOR_DISPLACEMENT };
}

Word Address::page() {
  return { (this->value_ & MASK_FOR_PAGE_NUMBER) >> NUMBER_OF_DISPLACEMENT_BITS };
}

Word Address::frame() {
  return { pcb.myPageTable[page()].frameNumber };
}