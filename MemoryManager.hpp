#ifndef MEMORY_MANAGER_HPP
#define MEMORY_MANAGER_HPP

class MemoryManager {
public:
  MemoryManager(const MemoryManager &) = delete;
  MemoryManager &operator=(const MemoryManager &) = delete;
  static MemoryManager &instance();
  void pageIn();
private:
  MemoryManager();
};

#endif