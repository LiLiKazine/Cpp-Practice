#include <vector>
#include <string>

class N_Queens
{
private:
    std::vector<int> rows;
    std::vector<int> gills;
    std::vector<int> dales;
    int n;
    std::vector<std::vector<std::string>> output{};
    std::vector<int> queens{};
    bool isNotUnderAttack(int row, int col);
    void placeQueen(int row, int col);
    void removeQueen(int row, int col);
    void addSolution();
    void backtrack(int row);

public:
    N_Queens();
    ~N_Queens();
    std::vector<std::vector<std::string>> solveNQueens(int n);
};

N_Queens::N_Queens()
{
}

N_Queens::~N_Queens()
{
}

std::vector<std::vector<std::string>> N_Queens::solveNQueens(const int n)
{
    this->n = n;
    
}
