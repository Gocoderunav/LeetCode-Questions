class Solution {
private:
void merge(vector<int>& nums , int low , int mid , int high ){
    if(low>= high){
        return;
    }
    int size = high-low +1;
    int left = low , right = mid+1 ;
    vector<int> sorted (size,0 );
    int k =0;
    while(left  <= mid && right <= high){
        if(nums[left] < nums[right]){
            sorted[k++] = nums[left++];
        }else{
            sorted[k++]= nums[right++];
        }
        
    }
    while(left <= mid){
        sorted[k++]= nums[left++];
    }while(right <= high){
        sorted[k++]= nums[right++];
    }
    for(int k =0 ; k < size; k++){
            nums[k+low]= sorted[k];
    }

}
  void mergeSort(vector<int>& nums ,int low , int high){
    if(low >= high){
        return;
    }
     int mid = low + (high - low) / 2;
    mergeSort(nums,low, mid);
    mergeSort(nums,mid+1, high);
    merge(nums,low , mid ,high);
  }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums , 0 , nums.size()-1);
        return nums;
    }
};