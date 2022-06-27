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
int endIdx(vector<int>&a,int x){
	int l=0;
	int r=a.size()-1; 
	int ans=-1; 
	while(l<=r){
		int mid=l+(r-l)/2; 
		if(a[mid]<x){
			l=mid+1; 
		}
		else if(a[mid]==x){
			ans=mid; 
			l=mid+1; 
		}
		else {
			r=mid-1; 
		}
	}
	return ans; 
}
bool binarySearch(vector<int>&a,int x){
	int l=0;
	int r=a.size()-1; 
	int ans=-1; 
	while(l<=r){
		int mid=l+(r-l)/2; 
		if(a[mid]==x){
			return true; 
		}
		else if(a[mid]>x){
			r=mid-1; 
		}
		else {
			l=mid+1; 
		}
	}
	return false; 
}
