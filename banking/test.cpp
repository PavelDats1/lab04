#include <gtest/gtest.h>
#include "Account.h"

TEST(AccountTest, DepositIncreasesBalance) {
    Account acc("DE123", 100.0);
    acc.deposit(50.0);
    EXPECT_DOUBLE_EQ(acc.getBalance(), 150.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
