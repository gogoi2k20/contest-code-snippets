int startIdx(vector<int>&a,int x){
	int l=0;
	int r=a.size()-1; 
	int ans=-1;  
	while(l<=r){
		int mid=l+(r-l)/2; 
		if(a[mid]>x){
			r=mid-1; 
		}
		else if(a[mid]==x) {
			ans=mid; 
			r=mid-1; 
		}
		else {
			l=mid+1; 
		}
	}
	return ans; 
}
