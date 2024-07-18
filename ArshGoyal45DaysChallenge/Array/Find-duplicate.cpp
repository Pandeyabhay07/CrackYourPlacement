class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        // This problem is just similar to the problem of the linked list cycle
        // We have to just find the start of the cycle
        // Use Hare and Tostoise method for that(floyd's algotithm)

        // to move slow one step --> slow=nums[slow]
        // to move fast two steps --> fast=nums[nums[fast]]

        int slow = nums[0];
        int fast = nums[0];

        // To detect the cycle move slow one step and fast two steps
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (fast != slow);

        // Cycle found and now its the time to detect the start of the cycle amd for that
        // Set the fast again to the start and then move slow and fast one step eacg
        // Where they meet again is the start of the cycle

        fast = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};