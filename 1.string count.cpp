/*if read #* then count 1 increament
if read *# then count increament

input string -' ##**'
n=4
  output: 1
  */

int stringCount(int n, string &s) {
	// Write your code here.
	int c=0;
	if(n==0)
	{
		return 0;
	}
	for(int i=0;i<n;i++ )
	{
		if(s[i]=='#' && s[i+1]=='*')
		c++;
		else if(s[i]=='*' && s[i+1]=='#')
		c++;
		else
		continue;
	}
	return c;
}
