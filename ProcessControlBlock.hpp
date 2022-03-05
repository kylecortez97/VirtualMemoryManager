#ifndef PROCESS_CONTROL_BLOCK_HPP
#define PROCESS_CONTROL_BLOCK_HPP

#include "Configuration.hpp"
#include "PageTableEntry.hpp"

typedef PageTableEntry PageTable[NUMBER_OF_PAGES];

PageTable page_table;

struct ProcessControlBlock {
  PageTable *ptr_page_table;
};

#endif