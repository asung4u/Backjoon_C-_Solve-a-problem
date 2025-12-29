#include <iostream>


int main() {

    // 정수를 문자열로 받음
    std::string setN[9];

    for (int i = 0; i < 9; i++) {

        std::cin >> setN[i];
    }


    // 최댓값 구하기
    int maxVal = std::stoi(setN[0]);

    for (int i = 1; i < 9; i++) {

        if (maxVal < std::stoi(setN[i])) {

            maxVal = std::stoi(setN[i]);
        }
    }


    // 해당 숫자 몇 번째 숫자인지 구하기
    int orderVal = 1;

    for (int i = 0; i < 9; i++) {

        if (maxVal == std::stoi(setN[i])) {

            break;
        }

        orderVal++;
    }


    // 출력하기
    std::cout << maxVal << "\n";
    std::cout << orderVal;

    return 0;
}