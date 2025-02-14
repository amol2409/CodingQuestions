#include "Common.h"

int findEqu(const vector<int> &vec){
    int index = -1;
    int n = vec.size();
    vector<int> prefixSum(n,0);

    prefixSum[0] = vec[0];
    for(int i=1; i<n; ++i){
        prefixSum[i] = prefixSum[i-1] + vec[i];
    }
    displayVec(prefixSum);

    for(int i=0; i<n; ++i){
        int leftSum = 0;
        int rightSum = 0;

        leftSum = (i != 0) ? prefixSum[i-1] : 0;
        rightSum = (i != n-1) ? (prefixSum[n-1] - prefixSum[i]) : 0;
        if(leftSum == rightSum){
            index = i;
            break;
        }
    }

    return index;
}

int main(){
    vector<int> vec = {1,2,3,4,5,-66,5,4,3,2,1};
    displayVec(vec);
    
    int index = findEqu(vec); 

    if(index == -1)
        cout << "EquilibriumIndex not present.";
    else
        cout << "EquilibriumIndex is :" << index << endl;
    return 0;
}
