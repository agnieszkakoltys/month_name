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
       TS_ASSERT_DELTA(language_name_lenght, 6, 0.0001)
    }
    void test3(void)
    {
    TS_ASSERT_DELTA(language_name_lenght, 9, 0.0001)
    }
    void test4(void)
    {
    TS_ASSERT_LESS_THAN(language_name_lenght, 6)
    }

    void test5(void)
    {
    TS_ASSERT_LESS_THAN(language_name_lenght, 9)
    }
   void test7(void)
    {
    TS_ASSERT_LESS_THAN(month_number, 1)
    }
   void test8(void)
    {
    TS_ASSERT_LESS_THAN(12, month_number)
    }
    void test9(void)
    {
         TS_WARN("TODO: Check invalid parameters");
    }
};
