#include <iostream>
using namespace std;

int main(){
    
    int array[3];
    int a,b,c,f = 0,s = 0;
    cin >> a >> b >> c;
    array[0] = a;
    array[1] = b;
    array[2] = c;
    
    for (int x = 0; x <= 2; x++) {
        switch (array[x]) {
            case 5:
                f++;
                break;
            case 7:
                s++;
                break;
            default:
                break;
        }
    }
    
    if(f == 2 && s == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
