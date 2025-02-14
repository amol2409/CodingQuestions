#include "Common.h"


void prefixSum(const vector<int> &vec)
{
    vector<int> pSum(vec.size(), 0);
    for(int i=0; i<vec.size(); ++i){
        if(i==0)
            pSum[i] = vec[i];
        else
            pSum[i] = pSum[i-1] + vec[i];
    }
    displayVec(pSum);
}

void prefixBackSum(const vector<int> &vec)
{
    int n = vec.size();
    vector<int> pSum(vec.size(), 0);
    for(int i=0; i<n; ++i){
        if(i==0)
            pSum[i] = vec[n-1-i];
        else
            pSum[i] = pSum[i-1] + vec[n-1-i];
    }
    displayVec(pSum);
}


int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    displayVec(vec);

    prefixSum(vec);
    prefixBackSum(vec);


    return 0;
}
