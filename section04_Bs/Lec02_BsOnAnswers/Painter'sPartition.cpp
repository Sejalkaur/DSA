//Link: https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int summation(vector<int> &arr){
    int sum = 0;
    for(int i =0;i <arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}

int NoOfPainters(vector<int> &arr, int units){
    int cntOfPainters = 1;
    int alreadyAlloc = 0;

    for(int i = 0;i < arr.size(); i++){
        if(alreadyAlloc + arr[i] <= units){
            alreadyAlloc += arr[i];
        }
        else{
            cntOfPainters++;
            alreadyAlloc = arr[i];
        }
    }
    return cntOfPainters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    if(k > boards.size())return -1;
    int low = *max_element(boards.begin(), boards.end());
    int high = summation(boards);
    int ans = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        int painters = NoOfPainters(boards, mid);
        if(painters > k){
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
    
}
