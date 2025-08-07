#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
   bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     int m = flowerbed.size(); 
     int count =0; 
     for(int i=0; i<m; ++i){
       if(flowerbed[i]==0){
         bool leftbed = (flowerbed[i-1]==0 || i==0); 
         bool rightbed = (flowerbed[i+1] ==0 || m-1==0); 
         if(leftbed && rightbed) {
            ++count; 
            flowerbed[i]=1;
            if(count>=n) return true; 
          }
       }
       
     }
     return count >=n; 
   }
};
int main(){
  vector<int> flowerbed = {1,0,0,0,1};
  int n=1;
  Solution sol;
  cout << boolalpha << sol.canPlaceFlowers(flowerbed,n) << endl;
  
  return 0; 
}
