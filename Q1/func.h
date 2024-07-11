#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> parser(string filename){
    ifstream input(filename);
    string curLine;
    vector<string> result;
    while(getline(input,curLine,',')){
        string s;
        for(char c:curLine){
            if(c == '\"' || c == '[' || c == ',' || c == ']') continue;
            s.push_back(c);
        }
        result.push_back(s);
    }

    return result;
}

void print(vector<vector<string>> strs){
    ofstream output("test.txt");
    for(vector<string> volcs:strs){
        if(volcs[0] == "") output << "empty line.";
        for(string volc:volcs){
            output << volc << " ";
        }
        output << '\n';
    }
}

#endif