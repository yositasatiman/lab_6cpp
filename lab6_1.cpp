#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int N = 0;
    int x = 0;
    int y = 0;
    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        N++;
        if(i%2 == 0){
            x++;
        }else{
            y++;
        }
    }
    cout << "#Even numbers = " << x-1;
    cout << "\n#Odd numbers = " << y;
    return 0;
}
