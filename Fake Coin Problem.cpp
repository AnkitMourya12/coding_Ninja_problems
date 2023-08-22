int FakeCoin(vector<int> &sum){
	// Write your code here.
	// int fak;
	// for(int i=0;i<sum.size();i++)
	// {
	// 	for(int j=sum.size()-1;j>i;j--)
	// 	{
	// 		if(sum[i]==sum[j])
	// 		{
                
	// 			return sum[i];
	// 		}
	// 	}

	  for(int i=1;i<sum.size();i++){

        if(sum[i]- sum[i-1]!=1)

        return i;
		
	}	
}
