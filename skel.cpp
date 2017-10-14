#include "../std_lib_facilities.h"

int main()
try {

    return 0;
} catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
} catch (...) {
    cerr << "Unknown error" << endl;
    return 2;
}
