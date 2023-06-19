//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int Solve(int n ,vector<int>& piles, int h) {
        
        int low = 1;
        int high = 1e9;

        while(low <= high){
        int mid = (low+high )/2;
        if(canEatInTime(piles,mid,h)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        }
        return low;
    }

    bool canEatInTime(vector<int>& piles,int k, int h){
        long long hours = 0;
        for(int pile : piles){
            int div = pile / k;   //here mid is k 
            hours += div;
            if(pile % k != 0) hours++;
        }
    return hours <= h;   //if hours less than needed then we decrease value ko k and move to the lef side of BS
    }
};


// Time complexity:
// O(NLOGH)

// Space complexity:
// O(1)


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends