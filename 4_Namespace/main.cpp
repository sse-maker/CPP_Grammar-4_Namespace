//
//  main.cpp
//  Namespace
//
//  Created by 세광 on 2021/06/18.
//

#include <iostream>

int n;
void set();

namespace doodle {
    int n;
    void set();

    namespace google {
        int n;
        void set();
    }
}

int main() {
    using namespace std; // main 함수 안에 적을 경우 main 함수 안에서만 유효
    using namespace doodle;
    
    ::set();
    doodle::set(); // 전역과 namespace 안에 있는 함수의 이름이 똑같을 경우 소속을 생략할 수 없음
    google::set(); // doodle::을 생략할 수 있음(모호성이 발생하지 X)
    
    cout << ::n << endl;
    cout << doodle::n << endl;
    cout << google::n << endl;
}

void set() {
    n = 10;
}

void doodle::set() {
    n = 20;
}

void doodle::google::set() {
    n = 30;
}
