#include<bits/stdc++.h>
using namespace std;

class Solution {
public:  //using fast and slow pointer approach
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];

        slow=nums[slow];
        fast=nums[nums[fast]];
        
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }

        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
};