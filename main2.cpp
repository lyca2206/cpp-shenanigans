#include <iostream>
#include <vector>
#include "oop_experiment/my_class.h"

using namespace std;

//Apparently, when you create an array of objects, you are literally instantiating as many objects as the size you're defining.
//This only happens with arrays. The STL Vector Library doesn't do this.
//To avoid deleting the same pointer twice, it is needed to do dynamic memory allocation to create an object.
void testing1() {
    my_class mc_vector[8];
    {
        my_class* mc = new my_class;
        mc_vector[0] = *mc;

        *(mc->int_ptr) = 12;

        cout << mc->int_ptr << endl;
        cout << *(mc->int_ptr) << endl;
        cout << mc_vector[0].int_ptr << endl;
        cout << *(mc_vector[0].int_ptr) << endl;
    }
}
void testing2() {
    vector<my_class> mc_vector;
    {
        my_class* mc = new my_class;
        mc_vector.push_back(*mc);

        *(mc->int_ptr) = 12;

        cout << mc->int_ptr << endl;
        cout << *(mc->int_ptr) << endl;
        cout << mc_vector[0].int_ptr << endl;
        cout << *(mc_vector[0].int_ptr) << endl;
    }
}

int main(int argc, char* argv[]) {
    testing1();
    testing2();
    return 0;
}