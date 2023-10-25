#include <gtest/gtest.h>
#include "../src/headers/Player.h"


Player player = Player("Test");


TEST(getHealthTest, Attack)
{
    EXPECT_EQ(10, player.getHealth());
    
}
