# include <iostream>
# include <string>


int main() {

    int T;

    std::cin >> T;      // 테스트 케이스의 개수

    std::string tstr[T];

    for (int i = 0; i < T; i++) {   // 문자열 입력

        std::cin >> tstr[i];
    }


    for (int i = 0; i < T; i++) {   // i번째 문자열의 첫 번째 문자와 length함수를 이용해 마지막 문자 출력

        std::cout << tstr[i][0] << tstr[i][tstr[i].length()-1] << "\n";
    }

    return 0;
}