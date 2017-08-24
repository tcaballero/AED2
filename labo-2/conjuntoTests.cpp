#include <gtest/gtest.h>
#include <Conjunto.h>

TEST(conjunto_test,test_crear) {
    Conjunto C;
    C.agregar("hola");
    C.agregar("mundo");
    EXPECT_EQ(C.pertenece("hola"), true);
    EXPECT_EQ(C.pertenece("mundo"), true);
    EXPECT_EQ(C.cardinal(), 2);
}

TEST(conjunto_test, test_agregar){
    Conjunto c;
    c.agregar("A");
    c.agregar("A");
    EXPECT_EQ(c.cardinal(), 1);
}

TEST(conjunto_test, test_cardinal){
    Conjunto c;
    EXPECT_EQ(c.cardinal(), 0);
}
