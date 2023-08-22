#include <bits/stdc++.h> 
vector<int> sortArray(vector<int> &arr)
{
	// Write your code here
	sort(arr.begin(),arr.end());
	return arr;
// 	map < int, int > m;
//  for (int i = 0; i < arr.size(); i++) {
//    m[arr[i]]++;
//  }
//  int idx = 0;
//  for (auto & val: m) {
//    while (val.second--) {
//      arr[idx++] = val.first;
//    }
//  }
//  return arr;
}
