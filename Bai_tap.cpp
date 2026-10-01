#include <iostream>
#include <math.h>

using namespace std;

int tongso (int n) {
    int tong=0;
    while (n!=0){
        tong+=n%10;
        n/=10;
    }
    return tong;
}




int main() {
    int n ; cin>>n;
    cout<<tongso(n)<<endl;
    if (tongso(n)%6==0) cout<<tongso(n) << " chia het cho 6";
    else cout<<tongso(n) << " khong chia het cho 6";
    return 0;

}