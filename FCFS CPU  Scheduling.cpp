#include <bits/stdc++.h> 
vector<vector<int>> findScheduling(int n, vector<int> &burstTime) {
    // Write your code here.
     vector<vector<int>> ans;
    int sum=0;
    vector<int> temp1;
    vector<int> temp2;

    for(int i=0;i<n;i++)
    {
        temp1.push_back(sum);
        sum+=burstTime[i];
        temp2.push_back(sum);
    }

    ans.push_back(temp1);
    ans.push_back(temp2);

    return ans;
}
