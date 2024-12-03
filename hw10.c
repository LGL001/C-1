#include <iostream>
#include <string>
using namespace std;

// 도시 정보를 저장할 구조체 정의
struct City {
    string name;      // 도시 이름
    string country;   // 국가 이름
    int population;   // 인구 수
};

int main() {
    City cities[3]; // 3개의 도시 정보를 저장할 배열 선언

    // 사용자로부터 도시 정보 입력받기
    cout << "세 개의 도시 정보를 입력하세요:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "도시 이름> ";
        getline(cin, cities[i].name);
        cout << "국가 이름> ";
        getline(cin, cities[i].country);
        cout << "인구 수> ";
        cin >> cities[i].population;
        cin.ignore(); // 개행 문자 제거
    }

    // 입력받은 도시 정보 출력
    cout << "\n입력받은 세 도시 정보:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << cities[i].name << " in " << cities[i].country 
             << " with a population of " << cities[i].population << " people" << endl;
    }

    return 0;
}
