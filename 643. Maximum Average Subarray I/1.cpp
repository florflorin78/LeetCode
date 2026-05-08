class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int current = 0;
        for(int i = 0; i < k; i++) 
            current += nums[i];

        int answer = current;
        for(int i = k; i < nums.size(); i++) {
            current += nums[i] - nums[i - k];
            answer = max(answer, current;
        }
    return (double) answer / k;
    }
};