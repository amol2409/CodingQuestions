#include "Common.h"

void displayVec(const std::vector<int>& vec){
    for(int x : vec)
        cout << x << "\t";
    cout << endl;
}
