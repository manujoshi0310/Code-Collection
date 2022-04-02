#include<bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection;
    vector<int>::iterator it;
    for(int i=0;i<nums1.size();i++){
        it=find(nums2.begin(),nums2.end(),nums1[i]);
        if(it!=nums2.end()){
            intersection.push_back(nums1[i]);
            nums2[it-nums2.begin()]=-1;
            nums1[i]=-1;
        }
    }
    return intersection;
}

int main(){
    vector<int> nums1, nums2, intersection;
    int len1, len2,x;
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

    intersection = intersect(nums1, nums2);
    cout<<"Intersection of arrays is: ";
    for(int i = 0; i<intersection.size();i++){
        cout << intersection[i] << " ";
    }

}