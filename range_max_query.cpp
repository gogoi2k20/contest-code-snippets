void buildTree(ll st[],vector<int>&a,ll si,ll ss,ll se){
	if(ss==se){
	st[si]=a[ss];
	return;
	}
	int mid=ss+(se-ss)/2;
	buildTree(st,a,2*si+1,ss,mid);
	buildTree(st,a,2*si+2,mid+1,se);
	st[si]=max(st[2*si+1],st[2*si+2]);
}
ll query(ll st[],ll si,ll ss,ll se, ll qs,ll qe){
if(ss>qe||se<qs){
	return -1e9;
}
if(ss>=qs and se<=qe){
	return st[si];
}
ll mid=ss+(se-ss)/2;
ll l=query(st,2*si+1,ss,mid,qs,qe);
ll r=query(st,2*si+2,mid+1,se,qs,qe);
return max(l,r);

}
