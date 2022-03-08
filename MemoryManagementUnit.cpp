#include "MemoryManagementUnit.hpp"

ProcessControlBlock pcb;

MemoryManagementUnit::MemoryManagementUnit() {
  for (int i = 0; i < NUMBER_OF_TLB_ENTRIES; i++) tlb_[i].pte.valid = false;
  for (int i = 0; i < NUMBER_OF_PAGES; i++) pcb.page_table[i].valid = false;

  tlb_access_count_ = 0;
  tlb_hit_count_ = 0;
  page_access_count_ = 0;
  page_fault_count_ = 0;
}

void MemoryManagementUnit::read(uint32_t value) {
  Address logical_address;
  Word displacement, page_number;

  logical_address.value_ = value;
  displacement = logical_address.displacement();
  page_number = logical_address.page();

  try {
    page_access_count_++;

    if (!pcb.page_table[page_number].valid) {
      page_fault_count_++;

      // ...
    } else {
      // ...
    }
  } catch (...) {
    // ...
  }
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