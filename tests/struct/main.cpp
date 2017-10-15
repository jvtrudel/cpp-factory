#define CATCH_CONFIG_MAIN

#include "bottin_atom.h"
#include <iostream>
#include "catch.hpp"

#include <QString>
#include "toQString.h"
#include <string>

using namespace std;

SCENARIO("constructeurs"){


}


SCENARIO("Opetareurs de comparaison"){

   GIVEN("2 objets avec un défault constructeur"){
     db::pj::bottin_atom b1;
     db::pj::bottin_atom b2;
     WHEN("operateur <"){
       REQUIRE((b1<b2)==false);
     }
     WHEN("operateur >"){
       REQUIRE((b1>b2)==false);
     }
     WHEN("operateur =="){
       REQUIRE((b1==b2)==true);
     }
     WHEN("operateur !="){
       REQUIRE((b1!=b2)==false);
     }
   }

}


SCENARIO("Conversion d'un type en QString"){
    WHEN("int"){
        REQUIRE(to_QString(1)==QString("1"));
    }
    WHEN("float"){
        float t=1.1;
        REQUIRE(to_QString(t)==QString("1.1"));
    }
    WHEN("double"){
        double t=1.1;
        REQUIRE(to_QString(t)==QString("1.1"));
    }
    WHEN("string"){
         std::string t("caca");
        REQUIRE(to_QString(t)==QString("caca"));
    }
}



