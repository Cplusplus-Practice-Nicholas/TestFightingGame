#include <gtest/gtest.h>
#include "../src/headers/Player.h"


Player player = Player("Test");


TEST(getHealthTest, Attack)
{
    EXPECT_EQ(10, player.getHealth());
    
}


TEST(getInventoryTest, Empty)
{
    EXPECT_EQ(-1, player.getInventory());
}

TEST(getInventoryTest, NotEmpty)
{
    EXPECT_EQ(0, player.getInventory());
}