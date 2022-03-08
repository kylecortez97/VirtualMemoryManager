#ifndef BACKING_STORE_HPP
#define BACKING_STORE_HPP

#include <fstream>

class BackingStore {
public:
  BackingStore();
  void read();
  ~BackingStore();
private:
  std::ifstream media_;
};

#endif