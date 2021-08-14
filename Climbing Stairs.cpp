//https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/569/


class Solution {
public:
    int climbStairs(int n) 
    {
        int arr[46]={0,};
        arr[1] = 1;
        arr[2] = 2; 
        return solution(n,arr);
    }
    
    int solution(int n , int* arr)
    {
         if(n==1 || n==2)
        {
            return n;
        }
        if(arr[n] !=0)
        {
            return arr[n];
        }
        
        arr[n] = solution(n-1,arr)+solution(n-2,arr);
        
        return arr[n];
    }
};
