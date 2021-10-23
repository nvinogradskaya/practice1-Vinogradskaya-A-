#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
struct Cats
{public:
    string nickname;
    double weight;
    void Nickname() {
        cout<<"\nКличка котика "<<nickname;
    }
    void Weight(){
        cout<<"\nВес котика "<<weight;
    }
};

struct Cat1 : Cats
{ Cat1() {
    nickname = "";
    weight = 5.5;
  }
};

int main()
{   setlocale(LC_ALL,"ru");
    Cats cc{"Бусинка", 6.2};
    cc.Nickname();
    cc.Weight();
    Cat1 c1;
    Cat1 c2;
    Cats * cats;
    vector<Cats*> v;

    for(int i = 0; i < 10; i++)
    {   double n;
        cout << "\tВведите вес котика "<< i<<"  ";
        cin>>n;
        cats = new Cats;
        cats->weight = n;
        v.insert(v.end(), cats);
    }

    for(vector<Cats*>::iterator it = v.begin(); it!=v.end(); it++)
        cout << "\tВес котика = " << (*it)->weight << endl;

    return 0;
}