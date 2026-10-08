#include <iostream>
#pragma once
using namespace std;

namespace Client {
    void run() {
        cout << "Client is running..." << endl;
    }

    void stop() {
        cout << "Client is stopping..." << endl;
    }

    void Hello()
    {
        cout <<"HI Fisal"<<endl;
    }

    int Sum(int A ,int B)
    {
        return A+B;
    }
}