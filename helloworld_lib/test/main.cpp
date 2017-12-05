#include <gtest/gtest.h>
#include <helloworld.h>

TEST(helloworld, version_gt)
{
  ASSERT_GT(version(), 0);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


