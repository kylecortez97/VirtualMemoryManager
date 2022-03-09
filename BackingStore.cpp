#include <iostream>

#include "BackingStore.hpp"
#include "Ram.hpp"

BackingStore::BackingStore() {
  this->media_.open("BACKING_STORE.bin", std::ios_base::binary | std::ios_base::in);

  if (!this->media_.is_open()) {
    std::cerr << "The Backing Store File Cannot Be Found.\n";
    exit(EXIT_FAILURE);
  }
}

BackingStore &BackingStore::instance() {
  static BackingStore instance_;
  return instance_;
}

void BackingStore::read() {
  // Do Something...
}

BackingStore::~BackingStore() {
  this->media_.close();
}