#ifndef BACKING_STORE_HPP
#define BACKING_STORE_HPP

#include <fstream>

class BackingStore {
public:
  BackingStore(const BackingStore &) = delete;
  BackingStore &operator=(const BackingStore &) = delete;
  static BackingStore &instance();
  void read();
  ~BackingStore();
private:
  BackingStore();
  std::basic_ifstream<unsigned int> media_;
};

#endif