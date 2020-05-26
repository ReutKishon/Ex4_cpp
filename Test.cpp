//
// Created by reut on 5/20/20.
//

#include "doctest.h"
#include <iostream>
#include <stdexcept>

#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include <cassert>

TEST_CASE("Paramedic vs Paramedic")
{
    WarGame::Board board(5, 5);
    CHECK(!board.has_soldiers(1));
    board[{1, 0}] = new Paramedic(1);
    CHECK(board.has_soldiers(1));

    CHECK(!board.has_soldiers(2));
    board[{4, 2}] = new Paramedic(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {1, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(1, {1, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(2, {4, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {3, 1}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {2, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {2, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {4, 4}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {3, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {1, 4}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
} //27

TEST_CASE("Sniper vs FootSoldier")
{
    WarGame::Board board(5, 5);
    CHECK(!board.has_soldiers(1));
    board[{1, 0}] = new Sniper(1);
    CHECK(board.has_soldiers(1));

    CHECK(!board.has_soldiers(2));
    board[{4, 2}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {1, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(1, {1, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(2, {4, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {3, 1}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {2, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {2, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {4, 4}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {3, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {1, 4}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
} //27

TEST_CASE("FootCommander vs FootSoldier")
{
    WarGame::Board board(5, 5);
    CHECK(!board.has_soldiers(1));
    board[{1, 0}] = new FootCommander(1);
    CHECK(board.has_soldiers(1));

    CHECK(!board.has_soldiers(2));
    board[{4, 2}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {1, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(1, {1, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {5, 1}, WarGame::Board::MoveDIR::Up));
    board.move(2, {4, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {3, 1}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {2, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {2, 1}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {5, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {4, 4}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {3, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {1, 4}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
} //27

TEST_CASE("All soldiers:")
{
    WarGame::Board board(8, 8);
    CHECK(!board.has_soldiers(1));

    board[{0, 3}] = new FootCommander(1);
    CHECK(board.has_soldiers(1));
    board[{1, 6}] = new Paramedic(1);
    board[{3, 2}] = new SniperCommander(1);
    board[{4, 5}] = new ParamedicCommander(1);
    board[{6, 0}] = new FootSoldier(1);
    board[{7, 7}] = new Sniper(1);

    board[{0, 5}] = new FootSoldier(2);
    board[{0, 7}] = new Paramedic(2);
    board[{2, 0}] = new ParamedicCommander(2);
    board[{3, 7}] = new Sniper(2);
    board[{4, 0}] = new SniperCommander(2);
    board[{7, 3}] = new FootCommander(2);

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(2));

    board.move(1, {2, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {0, 3}, WarGame::Board::MoveDIR::Up));
    board.move(2, {4, 0}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(2, {3, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Down));

    board.move(1, {6, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(1, {3, 2}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(1, {4, 5}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {0, 7}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {9, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {7, 8}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {1, 6}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {2, 0}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
} //28

TEST_CASE("2 soldiers vs 2 soldiers:")
{
    WarGame::Board board(8, 8);
    CHECK(!board.has_soldiers(1));

    CHECK(board.has_soldiers(1));
    board[{6, 0}] = new FootSoldier(1);
    board[{7, 7}] = new Sniper(1);

    board[{0, 5}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(2));

    board.move(1, {6, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Right));
    board.move(2, {0, 5}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(2, {3, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Down));

    board.move(1, {7, 7}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {7, 3}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(1, {6, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {5, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {9, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {7, 8}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {7, 6}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {4, 1}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
} //28

TEST_CASE("2 soldiers vs 2 soldiers:")
{
    WarGame::Board board(8, 8);
    CHECK(!board.has_soldiers(1));

    CHECK(board.has_soldiers(1));
    board[{6, 0}] = new FootSoldier(1);
    board[{7, 7}] = new Sniper(1);

    board[{0, 5}] = new FootSoldier(2);
    board[{7, 3}] = new FootCommander(2);

    CHECK(!board.has_soldiers(2));
    CHECK(board.has_soldiers(2));

    board.move(1, {6, 0}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Right));
    board.move(2, {0, 5}, WarGame::Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(2, {3, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {7, 7}, WarGame::Board::MoveDIR::Down));

    board.move(1, {7, 7}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {7, 3}, WarGame::Board::MoveDIR::Left);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(1, {6, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {5, 1}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    CHECK_THROWS(board.move(1, {9, 1}, WarGame::Board::MoveDIR::Up));
    CHECK_THROWS(board.move(2, {7, 8}, WarGame::Board::MoveDIR::Right));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));

    board.move(1, {7, 6}, WarGame::Board::MoveDIR::Down);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
    board.move(2, {4, 1}, WarGame::Board::MoveDIR::Right);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(1));
}