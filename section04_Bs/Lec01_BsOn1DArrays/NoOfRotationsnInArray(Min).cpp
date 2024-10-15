//Link: https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation
int findKRotation(vector<int> &nums) {
        // Code Here
        int ans = INT_MAX;
        int index = -1;
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;

            //if the whole array is sorted
            if(nums[low]<= nums[high]){
                if(ans>nums[low]){
                    index = low;
                    ans = nums[low];
                     
                }
                break;
            }
            //left sorted
            if(nums[low] <= nums[mid] && nums[mid] >= nums[high]){
                 if(ans>nums[low]){
                    index = low;
                    ans = nums[low];
                }
                
                low = mid+1;
            }else{
                 if(ans>nums[mid]){
                    index = mid;
                    ans = nums[mid];
                }
                
                high = mid-1;
            }
        }
        return index;
    }
