#include "Notification.h"
#include <iostream>
using namespace std;

std::ostream& operator << (std::ostream& os, const Notification& n){
    os << n.icon << " " << n.appName << " " ;
    int diff = (int)std::difftime(std::time(nullptr), n.timestamp) / (60 * 60 * 24);
    os <<  ((diff==0) ? "now" : std::to_string(diff) );
    os << ((diff==0) ? "" : " days" ) << std::endl;
    os << n.title << std::endl;
    os << n.text << std::endl;
    return os;
}

NotificationBuilder Notification::create(){
    return NotificationBuilder();
}

NotificationBuilder& NotificationBuilder::setSmallIcon(int icon) {
    notification.icon = icon;
    return *this;
}

NotificationBuilder& NotificationBuilder::setContentTitle(string title){
    notification.title = title;
    return *this;
}

NotificationBuilder& NotificationBuilder::setContentText(string text) {
    notification.text = text;
    return *this;
}

NotificationBuilder& NotificationBuilder::setPriority(int priority) {
    notification.priority=priority;
    return *this;
}
