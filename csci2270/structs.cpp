#include <iostream>

using namespace std;

struct car{
        int wheels;
        string year;
        double cost;
        string passangers[4];
    };

int main(){
    struct car toyota = {3, "2000", 30.5};
    string name;
    for(int i = 0; i < 4; i ++){
        cout << "enter passanger name: " << endl;
        cin >> name;
        toyota.passangers[i] = name;
    }

    cout << "wheels = " << toyota.wheels << endl;
    cout << toyota.passangers[2] << endl;

}
