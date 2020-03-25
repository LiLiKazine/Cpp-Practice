template <typename T>
T maxium(T value1, T value2, T value3)
{
    T maxiumValue = value1;
    if (value2 > maxiumValue)
    {
        maxiumValue = value2;
    }
    if (value3 > maxiumValue)
    {
        maxiumValue = value3;
    }
    return maxiumValue;
}