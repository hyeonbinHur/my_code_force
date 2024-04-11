#include <iostream>

using namespace std;

int main(){

    int num;
    cin >> num;
    string ans;
    if(num%2 == 0){
        ans = "YES";
    }else {
        ans = "NO";
    }
    cout<<ans<<endl;

    return 0;
}