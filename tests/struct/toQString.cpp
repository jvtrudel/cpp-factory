#include "toQString.h"


#include <string>
QString to_QString(const int &i){
    return QString::number(i);
}

QString to_QString(const double &i){
    return QString::number(i);
}

QString to_QString(const float &i){
    return QString::number(i);
}



QString to_QString(const std::string &i){
    return QString(i.c_str());
}

QString to_QString(const QString &i)
{
    return i;
}
