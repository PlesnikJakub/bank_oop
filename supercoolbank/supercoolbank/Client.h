#include <string>

#pragma once
using namespace std; 

class Client {
private:
    int code;
    string name;
    static int objectsCount;

public:
    static int GetObjectsCount();
    Client(int c, string n);
    ~Client();
    int GetClode();
    string GetName();
};
