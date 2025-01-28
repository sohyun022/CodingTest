#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0;i<prices.size()-1;i++){
        int count=0;
        for(int j=i+1;j<prices.size();j++){
            count++;
            if( prices[j] < prices[i]){
                break;
            }
            
        }
        answer.push_back(count);
    }
    
    answer.push_back(0);
    return answer;
}