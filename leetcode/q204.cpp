#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n<3){
            return 0;
        }

        int count=0;
        vector<bool> primes(n,true); 
        primes[0]=primes[1]=0;
        for(int i=2; i*i<=n; i++){
            if (primes[i]){
                count++;
                cout<<i<<endl;
                for(int j=i*i; j<n; j+=i){
                    cout<<"removed "<< j<<endl;
                    primes[j]=false;
                }
                // int j=2;
                // while((j*i)<n){
                //     cout<<"removed "<< i*j<<endl;
                //     primes[i*j]=false;
                //     j+=1;
                // }
            }
        }
        return count;   
    }
};

int main(){
    Solution sol;
    cout<<sol.countPrimes(25);
  
  return 0;
}