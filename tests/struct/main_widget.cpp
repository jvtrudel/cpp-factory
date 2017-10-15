#include "bottin_atom.h"
#include "bottin_atom_qwidget.h"

#include <QApplication>




#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    db::pj::bottin_atom bottin;

    db::pj::bottin_atom_qwidget *widg= new db::pj::bottin_atom_qwidget;


    widg->show();

    return a.exec();
}


