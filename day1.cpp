#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a=0, b=0;
    vector<int>list1;
    vector<int>list2;
    int max1=0;
    int min1=INT_MAX;
    int min2=INT_MAX;
    int max2=0;
    while(1){
        cin>>a>>b;
        max1=max(max1,a);
        max2=max(max2,b);
        if(a!=0)min1=min(min1,a);
        if(b!=0)min2=min(min2,b);
        list1.push_back(a);
        list2.push_back(b);
        if(a==0)break;
    }
    int st=min(min1,min2);
    list1.pop_back();
    list2.pop_back();
    vector<int> cnt1(max1+1,0);
    vector<int> cnt2(max2+1,0);
    int count=list1.size();
    sort(list1.begin(),list1.end());
    sort(list2.begin(),list2.end());
    for(int i=0;i<count;i++){
        cnt1[list1[i]]++;
        cnt2[list2[i]]++;
    }
    int sum=0;
    int size=max(cnt1.size(),cnt2.size());
    for(int i=st;i<size;i++){
        if(i<size)sum+=i*cnt1[i]*cnt2[i];
    }
    cout<<sum;
return 0;
}