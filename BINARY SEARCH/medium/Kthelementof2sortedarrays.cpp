#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
int kthelement(vector<int> &num1, vector<int> &num2, int k)
{
    int i1,i2;
    i1 =i2= 0;
    int n1 = num1.size(); 
    int n2 = num2.size(); 
    int lastpushed = num1[0];
    int pushedIime = 0;
    while(i1< n1 && i2 < n2){
        if(num1[i1] < num2[i2]){
            lastpushed = num1[i1];
            i1++;
        }
        else{
            lastpushed = num2[i2];
            i2++;
        }
        pushedIime++;
        if(pushedIime == k) return lastpushed;
    }
    while(i1< n1){
        lastpushed = num1[i1];
        i1++;
        pushedIime++;
        if (pushedIime == k)
            return lastpushed;
    }
    while(i2< n2){
        lastpushed = num2[i2];
        i2++;
        pushedIime++;
        if (pushedIime == k)
            return lastpushed;
    }

}
int main(){
    vector<int> num1 = {100, 112, 256, 349, 770};
    vector<int> num2 = {72, 86, 113, 119, 265, 445, 892};
    int k = 7;
    cout<< kthelement(num1, num2, k);
    return 0;
}