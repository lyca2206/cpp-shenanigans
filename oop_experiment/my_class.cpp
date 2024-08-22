#include "my_class.h"

my_class::my_class(): my_class(0) {}

my_class::my_class(int n) {
    int_ptr = new int;
    *int_ptr = n;
}

void my_class::operator=(const my_class& my_class) {
    delete int_ptr;
    int_ptr = my_class.int_ptr;
}

my_class::~my_class() {
    delete int_ptr;
    int_ptr = nullptr;
}