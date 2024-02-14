#ifndef INTLIST_H
#define INTLIST_H

class IntList
{
private:
    int* pointer;
    int capacity;
    int size;
public:
    void destroy();
    void copy(const IntList& list);

    IntList();
    IntList(int capacity);
    IntList(const IntList& list);

    void operator=(const IntList& list);

    int const getCapacity();
    int const getSize();

    void addElement(int element);

    ~IntList();
};

#endif // INTLIST_H
