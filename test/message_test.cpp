#include "gtest/gtest.h"

#include "MyLib/message.hpp"

TEST(message_test,content)
{
  EXPECT_EQ(get_message(),"Hello World!");
}
