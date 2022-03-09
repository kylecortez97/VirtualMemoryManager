#ifndef PAGE_TABLE_ENTRY_HPP
#define PAGE_TABLE_ENTRY_HPP

struct PageTableEntry {
  unsigned int frameNumber;
  bool valid;
};

#endif