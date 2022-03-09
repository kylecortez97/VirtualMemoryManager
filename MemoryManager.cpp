#include "BackingStore.hpp"
#include "MemoryManager.hpp"

MemoryManager::MemoryManager() {
  // Do Something...
}

MemoryManager &MemoryManager::instance() {
  static MemoryManager instance_;
  return instance_;
}

void MemoryManager::pageIn() {
  // Page In: Moves a page from the backing store to memory.

  // Do Something...
}