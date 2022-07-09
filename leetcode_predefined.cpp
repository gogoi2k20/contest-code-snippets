const int dx[4]={0,-1,0,1}; 
const int dy[4]={-1,0,1,0};  
const int mod=1e9+7;  
typedef long long ll;
// Structure to sort a priority queue on
// the basis of first element of the pair
struct mycomp {
    bool operator()(pair<int, int> p1,
                    pair<int, int> p2)
    {
        return p1.first < p2.first;
    }
};
