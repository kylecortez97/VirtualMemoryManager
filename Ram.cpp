#include "Ram.hpp"

Ram::Ram() {
  // Do Something...
}

Ram &Ram::instance() {
  static Ram instance_;
  return instance_;
}

void Ram::read() {
  // Do Something...
}