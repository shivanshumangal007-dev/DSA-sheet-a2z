#include<iostream>
#include<cmath>

using namespace std;

int getNOOfDigit(int n){
    if(n %10 < 1){
        return 1;
    }

    int cnt = 2;
    int ans = n;
    while(true){
        ans = ans /10;

        if(ans >= 10){
            cnt++;
        }
        else{
            break;
        }

    }
    return cnt;
}
int main(){
    int n;
    cin>> n; 

    int iniN =n;
    int sum = 0;
    int numberofdigits = getNOOfDigit(iniN);
        // cout<< getNOOfDigit(iniN) <<endl;
    for (int i = 0; i < numberofdigits; i++)
    {   
        int dig = n%10;
        n = n/10;
        cout << dig  << " : ";
        sum = sum + pow(dig, numberofdigits);
        cout<< sum <<endl;
    }

    if(sum == iniN){
        cout<<"yes , this is the armstrong no.";

    }
    else{
        cout<< "this is not the armstrong no.";
    }
    
    return 0;
}