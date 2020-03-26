#include <array>
class KnightsTour
{
private:
    /* data */
public:
    const std::array<int, 8> horizontal{2, 1, 1, -2, -2, -1, 1, 2};
    const std::array<int, 8> vertical{1, 2, 2, 1, -1, -2, -2, -1};
    KnightsTour();
    ~KnightsTour();
};

KnightsTour::KnightsTour()
{
}

KnightsTour::~KnightsTour()
{
}
