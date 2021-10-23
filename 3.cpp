#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
struct Cats
{public:
    int age;
    double weight;
    void Age() {
        cout<<"\nВозраст котика "<<age;
    }
    void Weight(){
        cout<<"\nВес котика "<<weight;
    }
};

struct Puma : Cats
{ Puma() {
        age = 2;
        weight = 5.5;
    }
};

int main()
{   setlocale(LC_ALL,"ru");
    Cats * cats;
    vector<Cats*> v;
    cout << "Введите количество котиков";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int d; double e;
        cout << "\tВведите возраст котика " << i<< "   ";
        cin >> d;
        cout << "\tВведите вес котика " << i<< "   ";
        cin >> e;
        cats = new Cats;
        cats->age=d;
        cats->weight=e;
        v.insert(v.end(),cats);
    }
    cout<<"\tПараметры котиков (возраст, вес) : "<< endl;
    for(vector<Cats*>::iterator it = v.begin(); it!=v.end(); it++)
        cout <<(*it)->age << "  " << (*it)->weight<< endl;

    return 0;
}
