#include<iostream>
#include<vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int count=0;
       for(int i=0;i<n;i++){
           if(nums[i]!=val){
               nums[count]=nums[i];
               count++;
           }
       }
       return count;
    }
};
int main(){
vector<int>nums={3,2,2,3};
int val=3;
int x= removeElement(nums,val);
cout<<x<<endl;
return 0;
}
