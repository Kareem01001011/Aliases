#include <iostream>
#include <sstream>
using namespace std;

int main( int argc, char** argv ) {
    try {

        stringstream args;
        for (int i = 1; i < argc; ++i) {
            args << " " << argv[i];
        }
        string s = args.str().erase(0, 1);
        // cout << s << endl;
        cout << s.length();
    } 
    catch (...) {
        cout << "No parameter found";
    }
    return 0;
}
