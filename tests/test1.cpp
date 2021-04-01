#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 2;
    z.im = -2;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 2"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 3"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}


TEST_CASE("test LZespolona Suma 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0001;
    y.im = 0.0001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma 5"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00009;
    y.im = 0.00001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona roznica 2"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}

TEST_CASE("test LZespolona roznica 3"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}


TEST_CASE("test LZespolona roznica 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0001;
    y.im = 0.0001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}

TEST_CASE("test LZespolona roznica 5 "){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00009;
    y.im = 0.00001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x-y == z);
}

TEST_CASE("test LZespolona mnoz 2 "){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 0;
    z.im = 0;
    
    CHECK(x*y == z);
}

TEST_CASE("test LZespolona mnoz 3 "){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
    CHECK(x*y == z);
}


TEST_CASE("test LZespolona mnoz 4"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 1;

    z.re = -1;
    z.im = 1;
    
    CHECK(x*y == z);
}

TEST_CASE("test LZespolona mnoz 5"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = 1;

    z.re = 0;
    z.im = 2;
    
    CHECK(x*y == z);
}

TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 1;
    z.im = 1;
    x+=y;
    CHECK( x == z);
}


TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 2;
    z.im = -2;
    
    x+=y;
    CHECK( x == z);
}

TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0;
    y.im = 0.0;

    z.re = 1;
    z.im = 1;
    
   x+=y;
    CHECK( x == z);
}

TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;
    
   x+=y;
    CHECK( x == z);
}


TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.0001;
    y.im = 0.0001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma dodane"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00009;
    y.im = 0.00001;

    z.re = 1;
    z.im = 1;
    
    CHECK(x+y == z);
}
