#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
        	if(nums[mid] < target)
        		low = mid + 1;
        	else
        		high = mid - 1;
        }
        return low;
    }
};
int main()
{
	int t = 1;
	vector<int> nums;
	nums.push_back(1);
	Solution* s = new Solution;
	cout << s->searchInsert(nums, t);
}