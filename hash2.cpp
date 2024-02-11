#include<iostream>
#include<string>
using namespace std;

template <typename T>
class MapNode{
    public:
    string key;
    T value;
    MapNode *next;

    Mapnode(string key, T value){
        this -> key = key;
        this -> value = value;
        next = NULL;
    }
};