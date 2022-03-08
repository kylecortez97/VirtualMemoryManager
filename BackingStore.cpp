#include <iostream>

#include "BackingStore.hpp"

BackingStore::BackingStore() {
  media_.open("BACKING_STORE.bin", std::ios_base::binary | std::ios_base::in);

  if (!media_.is_open()) {
    std::cerr << "The Backing Store File Does Not Exist.\n";
    exit(EXIT_FAILURE);
  }
}

void BackingStore::read() {
  // Do Something...
}

BackingStore::~BackingStore() {
  media_.close();
}