#ifndef PROCESS_CONTROL_BLOCK_HPP
#define PROCESS_CONTROL_BLOCK_HPP

#include "Configuration.hpp"
#include "PageTableEntry.hpp"

typedef PageTableEntry PageTable[NUMBER_OF_PAGES];

struct ProcessControlBlock {
  // ...
};

#endif