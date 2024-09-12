#include <gmock/gmock.h>

extern "C" {
#include "game.h"
};

class TestTrivia : public ::testing::Test {};

TEST_F(TestTrivia, test_game_can_be_created) {
    struct Game *game = game_new();
    (void)game;
    EXPECT_EQ(1, 2);
}