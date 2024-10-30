//Link: https://www.naukri.com/code360/problems/allocate-books_1090540?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

//to find max element tht will form low in the binary search
int maxEl(vector<int>& arr){
    int maxi = INT_MIN;
    for(int i = 0;i < arr.size(); i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

//to find summation tht will form high in the binary search
int summation(vector<int>& arr){
    int ans = 0;
    for(int i = 0;i < arr.size(); i++){
        ans += arr[i];
    }
    return ans;
}

//to find the no of students tht will determine to change the high n low accordingly
int noOfStudents(vector<int>& arr, int pages){
    int stu = 1;
    int pagesStuHold = 0;

    for(int i = 0;i < arr.size(); i++){
        if(pagesStuHold + arr[i] <= pages){ //if 25+46<=71 then pagesStuHold = 71
            pagesStuHold += arr[i];
        }
        else{
            stu++;
            pagesStuHold = arr[i];
        }
    }
    return stu;
}


//main function (Binary search)
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.

    if(m > n)return -1;
    
    int low = maxEl(arr);
    int high = summation(arr);
    int ans = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        int CntStudents = noOfStudents(arr, mid);

        if(CntStudents > m){//m = students
            low = mid + 1;
        }
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
