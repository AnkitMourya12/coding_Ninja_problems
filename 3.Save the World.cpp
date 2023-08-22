#include <bits/stdc++.h> 
int minAdjacentSwaps(int n, int k, int destination, int time, vector<int> &pos, vector<int> &speed)
{
	// Write your code here
	  int cnt=0;
    int swap=0;
    int notpossible=0;
    for(int i=n-1;i>=0;i--){
        int distance=destination-pos[i];
        int travel=speed[i]*time;
        if(travel >= distance){
            cnt++;
            if(notpossible>0){
                swap+=notpossible;
            }
        }
        else{
            notpossible++;
        }
        if(cnt >= k)break;
    }
    if(cnt>=k)return swap;
    else return -1;
}
