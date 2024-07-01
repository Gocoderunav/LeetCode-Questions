class Solution {
public:
    int kthGrammar(int n, int k) {
        int curr =0;
        int l = 1 , r = 1<<n-1;

        for(int i=1;i<n;i++){
            int mid = (l+r) / 2;
            if(k<=mid){
                r=mid;
            }
            else{
                l = mid+1;
                curr = 1-curr;
        }
        }
        return curr;
    }
};