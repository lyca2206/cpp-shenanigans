#include "intlist.h"

void IntList::destroy() {
    delete[] pointer;
    pointer = nullptr;
}

void IntList::copy(const IntList& list) {
    if (capacity < list.capacity) {
        destroy();
        pointer = new int[list.capacity];
        capacity = list.capacity;
    }

    for (int i = 0; i < list.size; ++i) {
        pointer[i] = list.pointer[i];
    }

    size = list.size;
}

IntList::IntList(): IntList(8) {}

IntList::IntList(int capacity){
    pointer = new int[capacity];
    this->capacity = capacity;
    size = 0;
}

IntList::IntList(const IntList& list):IntList() {
    copy(list);
}

void IntList::operator=(const IntList& list) {
    if (this != &list) {
        copy(list);
    }
}

int const IntList::getCapacity() {return capacity;}
int const IntList::getSize() {return size;}

void IntList::addElement(int element) {
    size++;

    if (size > capacity) {
        int* newList = new int[capacity + 8];

        for (int i = 0; i < capacity; ++i) {
            newList[i] = pointer[i];
        }

        destroy();

        pointer = newList;
        capacity = capacity + 8;
    }

    pointer[size - 1] = element;
}

IntList::~IntList() {
    destroy();
}
