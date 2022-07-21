// Example program
#include <iostream>
#include <string>
#include<vector>
#include <climits>
#include<algorithm>
using namespace std;


int minimumGroups(vector<int>& awards, int k){
    sort(awards.begin(), awards.end());
    int groups = 0;
    for(int i = 0; i < awards.size(); ){
       int minNum = awards[i];
       int j = i+1;
       for(;j < awards.size(); ++j){
           int diff = awards[j] - minNum;
           if(diff > k) break;
       }
       groups++;
       i = j;
    }
    return groups;
}

int main(){
    vector<int> awards{1,5,4,6,8,9,2};
    int k = 3;
    int mingrps = minimumGroups(awards, k);
    cout<<"The minimum groups are "<<mingrps<<endl;
    return 0;
}







