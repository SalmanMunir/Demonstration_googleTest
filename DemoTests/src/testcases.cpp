
# include "gtest/gtest.h"
# include "fact.h"

namespace{
class Facttest1 : public ::testing::Test {

};

TEST_F(Facttest1, factorial){
	int result = factorial(2);
	  ASSERT_EQ(2, result);
}

}

namespace{
class Facttest2 : public ::testing::Test {

};

TEST_F(Facttest2, factorial){
	int result = factorial(2);
	  ASSERT_EQ(2, result);
}


}


