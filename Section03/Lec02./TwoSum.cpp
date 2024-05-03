//Link: https://www.naukri.com/code360/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

//Brute:
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}


//Optimal:
string read(int n, vector<int> book, int target){
    sort(book.begin(), book.end()); //neccessary bcs it will only decide how the whole function works.
    int left=0; 
    int right=n-1;
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if (sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return "NO";
}
