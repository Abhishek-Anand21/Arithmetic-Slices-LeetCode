class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() <3)
            return 0;
        int i = 0,k=0,sum=0,count;
        while(i < nums.size()-1) {
            count = 1;
            int diff = nums[i+1] - nums[i];
            for(i=i;i<nums.size()-1;i++) {
                if(diff == (nums[i+1]-nums[i]))
                    count++;
                else
                    break;
            }
            if(count >= 3) {
                int n = count-2;
                sum += (n*(n+1))/2;
            }
        }
        return sum;
    }
};
