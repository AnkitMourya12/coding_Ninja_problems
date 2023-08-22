#include <bits/stdc++.h> 
#include<math.h>
vector<int> toggleBulbs(int n){
    // Write your code here.
    vector<int> arr;
    int i=1;

        while((i*i)<=n){

            arr.push_back(i*i);

            i++;

        }

        return arr;
}
