long long int BinaryStringToInt(string &s){
	int n=s.size(); 
	long long ans=0;  
	for(int i=0;i<n;i++){
		ans=ans+ (s[i]-'0')*pow(2LL,n-i-1);  
	}
	return ans; 
	
}
