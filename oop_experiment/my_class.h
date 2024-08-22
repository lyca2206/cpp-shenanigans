#ifndef MY_CLASS_H
#define MY_CLASS_H

class my_class {
    public:
        int* int_ptr;
        
        my_class();
        my_class(int n1);
        void operator=(const my_class& my_class);
        ~my_class();
};

#endif // MY_CLASS_H