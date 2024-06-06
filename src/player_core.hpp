#ifndef PLAYER_CORE_HPP
#define PLAYER_CORE_HPP

#include <numeric>
#include <vector>
#include "constant.hpp"

namespace player_core {
  class Player {
  public:
    std::vector<int> hand;
    int num = 0;

    Player()
        : hand(K, 0) {}

    void reset()
    {
      std::fill(hand.begin(), hand.end(), 0);
    }
  };

  struct Wall {
    std::vector<int> wall;

    Wall() = delete;
    explicit Wall(const Player& player)
        : wall(K, 0)
    {
      for (int i = 0; i < K; ++i) {
        wall[i] = 4 - player.hand[i];
      }
    }
  };
}

#endif
