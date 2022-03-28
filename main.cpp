#include <iostream>
#include <vector>

std::vector<int> old_deleted(std::vector<int> vec) {
    std::vector<int> newVec(vec.size());

    for (int i = 0; i < vec.size() - 1; i++) {
        newVec[i] = vec[i + 1];
    }
    newVec.pop_back();

    return newVec;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18}; // для удобства проверки сразу инициализировал вектор
    int num = 0;
    std::cout << "Enter the numbers: " << std::endl;
    while (num != -1){
        std::cin >> num;
        vec.push_back(num);
        if (vec.size() > 20) {
            vec = old_deleted(vec);
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
