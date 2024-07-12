#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool myCmp(pair<int,int> &a, pair<int,int> &b){
    return a.first*b.second < a.second*b.first;
}

int main(int argc, char* argv[]){
    ifstream input(argv[1]);
    int n;
    int sum = 0;
    vector<pair<int,int>> objs;
    int total_cost = 0;

    input >> n;
    objs.resize(n);
    for(int i = 0; i < n; i++){
        input >> objs[i].first;
    }
    for(int i = 0; i < n; i++){
        input >> objs[i].second;
    }

    sort(objs.begin(),objs.end(),myCmp);

    for(int i = 0; i < n-1; i++){
        sum += objs[i].first;
        total_cost += sum * objs[i+1].second;
    }

    ofstream output(argv[2]);
    output << total_cost << '\n';
    output.close();

    return 0;
}