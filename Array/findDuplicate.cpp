class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        for(int i = 0 ; i < nums.size() ; i++)
        {
            int index = abs(nums[i]);

            if(nums[index] < 0) return index;

            nums[index] = -nums[index];
        }

        return -1;
    }
};
//floyd-algorithm
int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
