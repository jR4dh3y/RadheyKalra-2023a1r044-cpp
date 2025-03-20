#include <iostream>
using namespace std;


int main() {
    int i, j, n;
    cin >> n;
    for(i = n + 1; ; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0)
            break;
        }
        if(j == i) break;
    }
    cout << i;
    return 0;
}
 
