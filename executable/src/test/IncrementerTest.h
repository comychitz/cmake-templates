#include <cxxtest/TestSuite.h>

class IncrementerTest : public CxxTest::TestSuite
{
  public:
    IncrementerTest()
    {
    }

    ~IncrementerTest()
    {
    }

    void setUp()
    {

    }

    void tearDown()
    {

    }

    void testIncrement()
    {
      Incrementer i;
      TS_ASSERT_EQUALS(i.val(), 0);
      i.inc();
      TS_ASSERT_EQUALS(i.val(), 1);
      i.inc();
      i.inc();
      TS_ASSERT_EQUALS(i.val(), 3);
    }
};
