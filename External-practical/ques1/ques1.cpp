class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int mi = 0, mx = 0;
        for(int x : nums){
            mi = max(mi, x);  
            mx += x;          
        }

        while(mi < mx){
            int mid = mi + (mx - mi) / 2;
            if(check(nums, k, mid)){
                mx = mid;     
            }else{
                mi = mid + 1;  
            }
        }
        return mi;          
    }

    bool check(vector<int>& nums, int k, int mid){
        int sum = 0;
        int cuts = 1;   

        for(int x : nums){
            if(sum + x > mid){
                cuts++;       
                sum = x;       
                if(cuts > k) return false;
            } else {
                sum += x;
            }
        }
        return true;
    }
};