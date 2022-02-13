/*
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

O(1)로 해결해야한다.

이 예는 시간복잡도 O(n) 공간복잡도 O(1)로 해결
*/


#include <iostream>
#include <vector>
using namespace std;

    int numTeams(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k );
        reverse(nums.begin() + k, nums.end());

        for (int n : nums) cout << n << " ";
        return 0;
    }



int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
    numTeams(nums, 3);
    int n;
    cin >> n;
}
