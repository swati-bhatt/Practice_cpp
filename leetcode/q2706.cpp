#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int size= sizeof(prices)/sizeof(int);
        int min1=prices[0];
        int index=0;
        int min2;
        for(int i=1; i<size; i++){
            if (min1>prices[i]){
                min1=prices[i];
                index=i;
            }
        }

        if (min1>money){
            return money;
        }
        else{
            prices.erase(std::next(prices.begin()+index));

            min2 = prices[0];
            for(int i=1; i<size; i++){
                if (min2>prices[i]){
                    min2=prices[i];
                    index=i;
                }
        }
        }

        if((min1+min2)>money){
            return money;
        }
        else{
            return money-(min1+min2);
        }
        
    }
};

int main(){
    Solution result;
    vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);

    int m=3;
    cout<<result.buyChoco(arr,m);
}

//  int temp;
//         int output;
//         for(int i=0; i<prices.size(); i++){
//             for(int j=0; j< prices.size()-i; j++){
//                 if(prices[i+1]<prices[i]){
//                     temp=prices[i+1];
//                     prices[i+1]=prices[i];
//                     prices[i]=temp;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         if (prices[0]+prices[1]<=money){
//             output = money-(prices[0]+prices[1]);
//         }
//         else{
//             output = money;
//         }
//         return output;
//     }
// };