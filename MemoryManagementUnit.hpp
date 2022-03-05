#ifndef MEMORY_MANAGEMENT_UNIT_HPP
#define MEMORY_MANAGEMENT_UNIT_HPP

#include "Configuration.hpp"
#include "PageTableEntry.hpp"

struct TLBEntry {
  PageTableEntry pte;
  unsigned int page_number;
};

typedef TLBEntry TLB[NUMBER_OF_TLB_ENTRIES];

class MemoryManagementUnit {
public:
  MemoryManagementUnit();
  int get_tlb_access_count();
  int get_tlb_hit_count();
  int get_page_access_count();
  int get_page_fault_count();
private:
  TLB tlb_;
  int tlb_access_count_;
  int tlb_hit_count_;
  int page_access_count_;
  int page_fault_count_;
};

#endif