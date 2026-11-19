class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x = 0;
        vector<int> xyz;
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]!=val){
                xyz.push_back(nums[i]);
            }
        }
        nums.resize(0);
        for(int i = 0; i<xyz.size();i++){
            nums.push_back(xyz[i]);
        }
        return nums.size();
        }
};