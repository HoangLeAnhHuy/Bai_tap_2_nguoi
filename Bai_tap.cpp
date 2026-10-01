#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, tong =0;
    cin>>n;
    while (n!=0){
        tong+=n%10;
        n/=10;
    }
    if (tong%6==0) cout <<tong<< " chia het cho 6";
    else cout<<tong<< " khong chia het cho 6";
    return 0;

}