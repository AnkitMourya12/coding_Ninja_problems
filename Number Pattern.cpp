#include <bits/stdc++.h> 
vector<string> numberPattern(int n)
{
	//type your code here
	  vector<string>ans;
    for(int i=1;i<=n;i++){
        string str="";
        for(int j=1;j<=i;j++){
             int k= i+j-1;
            string s=to_string(k);
            str+=s; 
        }
         ans.push_back(str);
    }
    return ans;
}
