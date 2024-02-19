#include "pch.h"
#include "../PrimeLib/framework.h"

TEST(prime, TestName) {
  EXPECT_EQ(isPrime(2), true);
  EXPECT_TRUE(true);
}

TEST(notPrime, TestName) {
	EXPECT_EQ(isPrime(6), false);
	EXPECT_TRUE(true);
}
