# include <iostream>


int orinum(int a, int b, int c, int d, int e) {

    return (a*a + b*b + c*c + d*d + e*e)%10;
}


int main() {

    int A, B, C, D, E;

    std::cin >> A >> B >> C >> D >> E;

    std::cout << orinum(A, B, C, D, E);

    return 0;
}