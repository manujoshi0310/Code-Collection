#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int len = nums1.size();
    for(int i=0;i<len-m;i++){
        nums1.pop_back();
    }
    for(int i = 0;i<n;i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}

int main(){
    vector<int> nums1, nums2;
    int m, n, len1, len2,x;
    cout << "Enter the no. of elements in list 1:";
    cin >> len1;
    
    for(int i=0;i<len1;i++){
        cout<<"Enter the element no. " << i+1 << ":";
        cin >> x;
        nums1.push_back(x);
    }
    
    cout << "Enter the no. of elements in list 2:";
    cin >> len2;

    for(int i=0;i<len2;i++){
        cout<<"Enter the element no. " << i+1 << ":";
        cin >> x;
        nums2.push_back(x);
    }

    cout<< "Enter target no. for list 1:";
    cin >> m;
    
    cout<< "Enter target no. for list 2:";
    cin >> n;

    merge(nums1, m, nums2, n);

    for(int i = 0; i<nums1.size();i++){
        cout << nums1[i] << " ";
    }
}