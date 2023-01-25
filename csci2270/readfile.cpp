#include <fstream>
#include <iostream>


using namespace std;

int main(int argc, char* argv[]){
    ifstream fin;

    string filename = argv[1];
    string line;

    // cout << "Enter a filename: " << endl;
    // cin >> filename;

    fin.open(filename);

    while(getline(fin, line)){
        cout << line << endl;
    }

    
}