//
// Created by wjsrh on 2023-04-11.
//

#ifndef UNTITLED_NOTIFICATION_H
#define UNTITLED_NOTIFICATION_H
#include <iostream>
#include <ctime>
using namespace std;

class NotificationBuilder;
class Notification{
public:
    static NotificationBuilder create();
    friend class NotificationBuilder;
    friend ostream& operator << (ostream &os, const Notification& n);

private:
    Notification() = default;
    int icon;
    string appName = "PNU";
    time_t timestamp = time(nullptr);
    string title;
    string text;
    int priority;
};

class NotificationBuilder{
public:
    operator Notification() const { return std::move(notification);}
    NotificationBuilder& setSmallIcon(int icon);
    NotificationBuilder& setContentTitle(string title);
    NotificationBuilder& setContentText(string text);
    NotificationBuilder& setPriority(int priority);
private:
    Notification notification;
};


#endif //UNTITLED_NOTIFICATION_H
