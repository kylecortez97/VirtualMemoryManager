#ifndef MEMORY_MANAGEMENT_UNIT_HPP
#define MEMORY_MANAGEMENT_UNIT_HPP

#include <stdexcept>

#include "Address.hpp"
#include "Configuration.hpp"
#include "ProcessControlBlock.hpp"

struct TLBEntry {
  PageTableEntry pte;
  unsigned int pageNumber;
};

typedef TLBEntry TLB[NUMBER_OF_TLB_ENTRIES];

class MemoryManagementUnit {
public:
  struct PageFault : public std::runtime_error {
    PageFault(const char *);
    Word pageNumber_;
  };

  MemoryManagementUnit(const MemoryManagementUnit &) = delete;
  MemoryManagementUnit &operator=(const MemoryManagementUnit &) = delete;
  static MemoryManagementUnit &instance();
  void read(uint32_t);
  int getTLBAccessCount();
  int getTLBHitCount();
  int getPageAccessCount();
  int getPageFaultCount();
private:
  MemoryManagementUnit();
  TLB tlb_;
  int tlb_access_count_;
  int tlb_hit_count_;
  int page_access_count_;
  int page_fault_count_;
};

#endif