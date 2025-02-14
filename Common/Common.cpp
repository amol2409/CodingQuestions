#include "Common.h"

using namespace std;

void displayVector(const std::vector<int>& vec){
    for(int x : vec)
        cout << x << "\t";
    cout << endl;
}
