#include "fact.h"
#include "/home/IBEO.AS/samu/workspaceEclipse/DemoTests/src/gtest/gtest.h"

int main(int argc, char **argv)
{

	 testing::InitGoogleTest(&argc, argv);
	  return RUN_ALL_TESTS();

}


int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}
