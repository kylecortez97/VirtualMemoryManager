// Group: Kyle Cortez, Christopher Freeland, Malik Majdalawi
// Project: Designing a Virtual Memory Manager

#include <iostream>

#include "MemoryManagementUnit.hpp"

uint32_t value;

int main() {
  while (std::cin >> value) {
    try {
      MemoryManagementUnit::instance().read(value);
    } catch (MemoryManagementUnit::PageFault &e) {
      // Do Something...
    }
  }

  return EXIT_SUCCESS;
}