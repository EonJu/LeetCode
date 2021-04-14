#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start =0,end=0;
        vector<int> answer;
        for(int i=0 ; i<nums.size(); i++)
        {
            start = nums[i];
            for (int j = i+1 ; j<nums.size(); j++)
            {
                end=nums[j];
                if(start+end ==target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;
    }
};

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution solution = Solution();
    vector<int> answer = solution.twoSum(nums,target);

    cout<<answer[0]<<answer[1]<<endl;

   

}

