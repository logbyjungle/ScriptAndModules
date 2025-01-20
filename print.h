# include <iostream>
# include <vector>
# include <array>
# include <string>
# include <string_view>

template <typename T = std::string_view>
void print(const T& x = "", const bool& newl = true)
{
    std::string newll = "\n";
    if (!newl) newll = {};
    std::cout << x << newll;
}

template <typename T>
void print(const std::vector<T>& arr, const bool& newl = true)
{
    for (const T& x : arr) {
        print(x,false);
        std::cout << " ";
    }
    if (newl) print();
}

template <typename T, std::size_t N>
void print(const std::array<T,N>& arr, const bool& newl = true)
{
    for (const T& x : arr) {
        print(x,false);
        std::cout << " ";
    }
    if (newl) print();
}

template <typename T, std::size_t N>
void print(const T (&arr)[N], const bool& newl = true)
{
    char space = ' ';
    if (typeid(arr[0]) == typeid(char))
    {
        space = {};
    }
    for (const auto& x : arr) {
        print(x,false);
        std::cout << space;
    }
    if (newl) print();
}
