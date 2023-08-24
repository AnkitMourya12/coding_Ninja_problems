vector<int> sumOfEvenOdd(long long num) 
{
	// Write your code here.
	
	int s=0;
	int s1=0;
	while(num!=0)
	{
		int r=num%10;
		if(r%2==0)
		{
			s=s+r;
		}
		
		else
		{s1=s1+r;
		}

		num=num/10;


	}
	vector<int> ans;
	ans.push_back(s);
	ans.push_back(s1);
	return ans;

}
