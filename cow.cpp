#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    int numCows = 0, weightSum, i;
    int weight;
    vector <int> weightCows;

    ifstream inFile("file.in", ios::in);

    while(inFile >> weight){
        weightCows.push_back(weight);
        numCows++;
    }
    
    sort(weightCows.begin(), weightCows.end());
    
    for(i = 1; i <= 5; ++i){
        weightSum = weightSum + weightCows.at(numCows - i);
    }

    cout << weightSum << endl;
    return 0;
}
