//
//  SimpleAllocator.h
//  LowLevelMemory
//
//  Created by Анастасия Мехова on 28.12.2024.
//

#ifndef SimpleAllocator_h
#define SimpleAllocator_h


class SimpleAllocator {
public:
    SimpleAllocator(size_t size);
    void* Allocate(size_t get_size);
    void Free();
    ~SimpleAllocator();
private:
    size_t capacity;
    size_t offset;
    char* memory;
};



#endif /* SimpleAllocator_h */
