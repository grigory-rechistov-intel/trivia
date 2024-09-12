#include <gmock/gmock.h>

#include "Game.h"

class TestTrivia : public ::testing::Test {};

TEST_F(TestTrivia, test_game_can_be_created) {
    Game aGame;
    EXPECT_EQ(1, 2);
}