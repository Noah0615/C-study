//
// Created by wjsrh on 2023-05-25.
//

#ifndef UNTITLED_WORKERTHREAD_H
#define UNTITLED_WORKERTHREAD_H
#include <iostream>
#include <vector>
#include <mutex>
using namespace std;

class WorkerThread {
public:
    void play();
private:
    void readWorker();
    void writeWorker(int value);
    std::mutex mu;
    std::vector<SharedPreferences*> answers;
};
#endif //UNTITLED_WORKERTHREAD_H
