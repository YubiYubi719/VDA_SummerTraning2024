#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    ofstream output(argv[1]);
    srand(time(NULL));
    int n = rand() % 1000 + 2;
    output << n << '\n';
    for(int i = 0; i < n; i++){
        output << rand()%100+1 << " ";
    }
    output << '\n';
    for(int i = 0; i < n; i++){
        output << rand()%100+1 << " ";
    }
    output.close();
}