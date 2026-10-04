class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int l = 0, r = 0;
        int n = nums.size();
        
        // Loop until our right boundary reaches or crosses the last index (n - 1)
        while (r < n - 1) {
            int farthest = 0;
            
            // Find the maximum reach from the current window [l, r]
            for (int ind = l; ind <= r; ++ind) {
                farthest = max(farthest, ind + nums[ind]);
            }
            
            // Move the window forward and increment jump count
            l = r + 1;
            r = farthest;
            jumps++;
        }
        
        return jumps;
    }
};