// finaltest.h
#include <cxxtest/TestSuite.h>
#include "test.h"

class MyTestSuite1 : public CxxTest::TestSuite
{
public:
    void test1(void)
    {
        TS_ASSERT(month_number > 1);
    }
    void test2(void)
    {
       TS_ASSERT_EQUALS(month_number, real_month_number);
    }
    void test3(void)
    {
    TS_ASSERT_DIFFERS(month_number, real_month_number);
    }
    void test4(void)
    {
    TS_ASSERT_LESS_THAN(month_number, real_month_number);
    }

    void test5(void)
    {
    TS_ASSERT_LESS_THAN_EQUALS(month_number, real_month_number);
    }
    void test6(void)
    {
         TS_WARN("TODO: Check invalid parameters");
    }
};
