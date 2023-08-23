#include <bits/stdc++.h> 
pair < int , int > findMinMax(int a , int b) 
{
	// Write Your Code here 
	if(a<=b)
	return {a,b};  
	else
	return {b,a};     
}
