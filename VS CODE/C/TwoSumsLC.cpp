#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                returnSize[0]=i;
                returnSize[1]=j;
                return(returnSize);
            }
        }
    }
}

int main(){
    int* arr = {2,7,11,15};
    int returnSize[];
    int* returnSizeE = twoSum(arr[], 4, 9, returnSize[]);

    return 0;
}