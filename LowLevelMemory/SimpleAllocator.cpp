//
//  SimpleAllocator.cpp
//  LowLevelMemory
//
//  Created by Анастасия Мехова on 28.12.2024.
//

#include <stdio.h>
#include <new>
#include "SimpleAllocator.h"

SimpleAllocator::SimpleAllocator(size_t size): capacity(size), offset(0) {
    memory = new char[size];
}
void* SimpleAllocator::Allocate(size_t get_size) {
    if(offset + get_size > capacity) {
        throw std::bad_alloc();
    }
    void* ptr = memory + offset;
    offset += get_size;
    return ptr;
}
void SimpleAllocator::Free() {
    offset = 0;
}

SimpleAllocator::~SimpleAllocator() {
    delete [] memory;
}
