#include "util/tool/tool.hpp"

#include <gtest/gtest.h>

namespace util
{

class ToolTest
{
};

TEST(ToolTest, ConstructorTest)
{
    Tool myB;
    EXPECT_EQ(5, 5);
}

}  // namespace util
