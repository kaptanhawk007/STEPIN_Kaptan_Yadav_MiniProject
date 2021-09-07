#include "fun.h"
#include "unity.h"

void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_Zero(void)
{
   // All the functions are of return type void. I can't run test cases for most of them.
   TEST_ASSERT_EQUAL(1, gameover());
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_Zero);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
