#include <memory>

void* operator new(size_t size)
{
    return malloc(size);
}

void operator delete(void* memory)
{
    free(memory);
}

class DynamicSet
{
    public:
        DynamicSet();
        virtual int Size() = 0;
};

DynamicSet::DynamicSet() {}

class Example: public DynamicSet
{
    private:
        int size;
    public:
        Example();
        int Size() override;
        ~Example();
};

Example::Example(): size(0) {}

int Example::Size()
{
    return size;
}

Example::~Example() {}

int main(int argc, char const *argv[])
{
    Example* e = new Example();
    delete e;
    return 0;
}
