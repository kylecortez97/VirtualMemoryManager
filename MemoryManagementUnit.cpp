#include "MemoryManagementUnit.hpp"
#include "MemoryManager.hpp"
#include "ProcessControlBlock.hpp"

ProcessControlBlock pcb;

MemoryManagementUnit::MemoryManagementUnit() {
  for (int i = 0; i < NUMBER_OF_TLB_ENTRIES; i++) this->tlb_[i].pte.valid = false;
  for (int i = 0; i < NUMBER_OF_PAGES; i++) pcb.myPageTable[i].valid = false;

  this->tlb_access_count_ = 0;
  this->tlb_hit_count_ = 0;
  this->page_access_count_ = 0;
  this->page_fault_count_ = 0;
}

MemoryManagementUnit::PageFault::PageFault(const char *what_arg) : std::runtime_error(what_arg) { }

MemoryManagementUnit &MemoryManagementUnit::instance() {
  static MemoryManagementUnit instance_;
  return instance_;
}

void MemoryManagementUnit::read(uint32_t value) {
  Address logicalAddress;
  Word displacement, pageNumber;

  logicalAddress.value_ = value;
  displacement = logicalAddress.displacement();
  pageNumber = logicalAddress.page();

  this->page_access_count_++;

  if (!pcb.myPageTable[pageNumber].valid) {
    this->page_fault_count_++;
    throw PageFault("Page Fault Occurred.");
  }
}

int MemoryManagementUnit::getTLBAccessCount() {
  return this->tlb_access_count_;
}

int MemoryManagementUnit::getTLBHitCount() {
  return this->tlb_hit_count_;
}

int MemoryManagementUnit::getPageAccessCount() {
  return this->page_access_count_;
}

int MemoryManagementUnit::getPageFaultCount() {
  return this->page_fault_count_;
}