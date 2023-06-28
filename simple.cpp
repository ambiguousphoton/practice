#include <iostream>
using namespace std;
int main(){
    int l = 5;
    int row ;
    cin >> row;
    int x = 1;
    while ( x <= row){
        int y = 1;
        while ( y <= x ){
            cout << x << "  ";
        
            y++;
        }
        cout << endl;
        x++;
        
    }
    
}
