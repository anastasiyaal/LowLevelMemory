//
//  main.cpp
//  LowLevelMemory
//
//  Created by Анастасия Мехова on 27.12.2024.
//

#include <iostream>
#include "SimpleAllocator.h"

struct Data {
    int i;
    char d;
    char c;
    //int i;
};


void f(){
    static int r = 0;
    r++;
    std::cout << r << "\n";
}

int main(int argc, const char * argv[]) {
    if(0) {
        //int* f = new int(0);
        int* d = static_cast<int*>(malloc(sizeof(int)));
        std::cin >> *d;
        // insert code here...
        std::cout << *d << "\n";
        //delete f;
        free(d);
        f();
        f();
        f();
        std::cout << sizeof(Data) << "\n";
    }
    
    SimpleAllocator a(1024); 
    void* f = a.Allocate(128);
    void* s = a.Allocate(128);
    void* y = a.Allocate(128);
    void* u = a.Allocate(128);
    void* i = a.Allocate(128);
    void* g = a.Allocate(128);
    void* h = a.Allocate(128);
    a.Free();
    void* n = a.Allocate(1024);
    void* q = a.Allocate(1);
    // insert code here...
    //
    //
    std::cout << "Hello, World!\n";
    //
    return 0;
}
