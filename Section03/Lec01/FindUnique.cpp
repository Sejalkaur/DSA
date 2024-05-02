//Link: https://leetcode.com/problems/single-number/submissions/1247567705/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }return ans;
    }
};

//Link: https://www.naukri.com/code360/problems/find-the-single-element_6680465?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
int getSingleElement(vector<int> &arr){
	int ans=0;
	for(int i=1;i<arr.size();i=i+2){
		if(arr[i-1]!=arr[i]){
			ans=arr[i-1];
			return ans;
		}
	}
	return arr[arr.size()-1];
}
