#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

const int NUMBER_OF_ADDRESS_BITS = 16;
const int NUMBER_OF_DISPLACEMENT_BITS = 8;
const int NUMBER_OF_PAGE_NUMBER_BITS = NUMBER_OF_ADDRESS_BITS - NUMBER_OF_DISPLACEMENT_BITS;

const int NUMBER_OF_TLB_ENTRIES = 16;

const int NUMBER_OF_PAGES = 1 << NUMBER_OF_PAGE_NUMBER_BITS;

#endif