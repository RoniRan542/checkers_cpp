#ifndef __GRID_HPP__
#define __GRID_HPP__

#include <iostream>
#include <vector>

#include "square.hpp"

class Grid
{
public:
    explicit Grid();
    std::vector<std::vector<Square>> &GetGrid();
    std::pair<int, int> GetChosenIndices() const;
    void SetChosenIndices(int x, int y);

private:
    void Init();
    std::vector<std::vector<Square>> grid_squares_2d;
    std::pair<int, int> m_chosen_square;
};

#endif // __GRID_HPP__