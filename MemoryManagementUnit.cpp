#include "MemoryManagementUnit.hpp"
#include "ProcessControlBlock.hpp"

MemoryManagementUnit::MemoryManagementUnit() {
  for (int i = 0; i < NUMBER_OF_TLB_ENTRIES; i++) tlb_[i].pte.valid = false;

  tlb_access_count_ = 0;
  tlb_hit_count_ = 0;
  page_access_count_ = 0;
  page_fault_count_ = 0;
}

void MemoryManagementUnit::read() {
  // ...
}

int MemoryManagementUnit::get_tlb_access_count() {
  return tlb_access_count_;
}

int MemoryManagementUnit::get_tlb_hit_count() {
  return tlb_hit_count_;
}

int MemoryManagementUnit::get_page_access_count() {
  return page_access_count_;
}

int MemoryManagementUnit::get_page_fault_count() {
  return page_fault_count_;
}