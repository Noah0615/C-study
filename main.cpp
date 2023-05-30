#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
#include <functional>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int number_counter = 1;

class Employee {
public:
    int no;
    char* name;
    int gender;
    char* rank;

    Employee(char* name, int gender, char* rank){
        this->name = new char[strlen(name) + 1];
        this->rank = new char[strlen(rank) + 1];
        strcpy(this->name, name);
        this->gender = gender;
        strcpy(this->rank, rank);
        this->no = number_counter;
        number_counter++;
    }
    ~Employee(){
        delete[] name;
        delete[] rank;
        cout << no << "의 사원번호를 가진 사원이 삭제 되었습니다" << endl;
    }
    void printInfo(){
        cout << "사원번호: " << no << endl;
        cout << "사원명: " << name << endl;
        printf("성별: %s\n", gender == 1 ? "남성" : "여성");
        cout << "직급: " << rank << endl;
    }

};

int getInt(const char* prompt);

//함수 실행 후 메모리 해제를 꼭 해줘야 한다.
char* getString(const char* prompt);

int main(){
    Employee* employee[100];
    int count = 0;


    while(true) {
        cout << "명령을 입력하세요" << endl;
        cout << "1. 사원 보기" << endl;
        cout << "2. 사원 추가" << endl;
        cout << "3. 사원 삭제" << endl;
        cout << "4. 프로그램 종료" << endl;

        fseek(stdin, 0, SEEK_END);
        int input;
        cin >> input;
        if (input == 1) {
            //사원 보기
            for(int i=0; i < count; i++) {
                employee[i]->printInfo();
            }
        }
        else if (input == 2){
            //사원 추가
           char* name = getString("사원명 입력해주세요: ");
           int gender = getInt("성별을 입력해 주세요(1남성, 2여성):");
           char* rank = getString("직급을 입력해주세요: ");

           Employee* e = new Employee(name, gender, rank);
           delete[] name;
           delete[] rank;

           employee[count] = e;
           count++;
        }
        else if (input = 3){
            //사원 삭제
            int number = getInt("사원번호를 입력해주세요.");
            int deletedIndex = -1;
            for(int i=0; i<count; i++) {
                if(number == employee[i]->no) {
                    delete employee[i];
                    deletedIndex = i;
                    break;
                }
            }
            if (deletedIndex >= 0) {
                for (int i=deletedIndex; i < count-1; i++) {
                    employee[i] = employee[i+1];
                }
            }
            count--;
        }
        else if (input == 4) {
            //프로그램 종료
            cout << "프로그램을 종료합니다" << endl;
            break;
        }
        else {
            //올바르지 않은 입력
            cout << "입력값이 올바르지 않습니다." << endl;
        }
    }
    return 0;
}

int getInt(const char* prompt) {
    int input;
    cout << prompt;
    fseek(stdin, 0, SEEK_END);
    cin >> input;
    return input;
}

char* getString(const char* prompt) {
    char* input = new char[100];
    cout << prompt;
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", input);
    return input;
}