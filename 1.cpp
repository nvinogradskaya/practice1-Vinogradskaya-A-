#include <iostream>
using namespace std;
void func(int &x) {
    x=x+3;
}
int main () {
    int c=5;
    function<void (int &)> ff=[] (int &x){
        x=x+3;
    };
    function<int (void)> f=[&c] {return c=c+3;};
    cout<<f()<<endl;
    ff(c);
    cout << c;
}