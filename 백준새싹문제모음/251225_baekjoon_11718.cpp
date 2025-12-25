# include <iostream>
# include <string>


int main() {

    std::string outs[100];  // 입력 받는 문자열
    int count = 0;

    while (count < 100 && std::getline(std::cin, outs[count])) {   // getline을 이용해 줄을 그대로 리스트 형식으로 저장

        count++;
    }

    for (int i = 0; i < count; i++) {   // 한 줄씩 출력하면서 줄바꿈 추가

        std::cout << outs[i] << "\n";
    }


    return 0;
}
