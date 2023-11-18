#include "loginvm.h"
#include <QDebug>

LoginVM::LoginVM()
{

}

bool LoginVM::login(QString username, QString password) {
    if (username == "admin" && password == "admin") {
        return true;
    }
    return false;
}
