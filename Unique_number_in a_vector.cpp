#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vt = { 7, 9, 1, 7, 8, 0, 9, 1, 8 };
    for (std::vector<int>::iterator it1 = vt.begin(); it1 != vt.end(); ++it1) {
        bool hasPair = false;
        for (std::vector<int>::iterator it2 = vt.begin(); it2 != vt.end(); ++it2) {
            if (*it1 == *it2 && it1 != it2) {
                hasPair = true;
                break;
            }
        }
        if (hasPair != true) {
            std::cout << *it1 << " is unique";
        }
    }
    return 0;
}