#include <iostream>
#include "decorators.hpp"

using namespace std;


int main(int argc, char *argv[])
{
    vector<int> container = {1, 2, 3};
    
    int x = 2;
    int y = 5;
    
    cout << "is " << x << " in container? " << std::boolalpha <<  x in container << endl;
    cout << "is " << y << " in container? " << std::boolalpha << y in container << endl;
    

    return 0;
}
