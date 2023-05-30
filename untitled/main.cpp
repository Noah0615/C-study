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
        cout << no << "�� �����ȣ�� ���� ����� ���� �Ǿ����ϴ�" << endl;
    }
    void printInfo(){
        cout << "�����ȣ: " << no << endl;
        cout << "�����: " << name << endl;
        printf("����: %s\n", gender == 1 ? "����" : "����");
        cout << "����: " << rank << endl;
    }

};

int getInt(const char* prompt);

//�Լ� ���� �� �޸� ������ �� ����� �Ѵ�.
char* getString(const char* prompt);

int main(){
    Employee* employee[100];
    int count = 0;


    while(true) {
        cout << "����� �Է��ϼ���" << endl;
        cout << "1. ��� ����" << endl;
        cout << "2. ��� �߰�" << endl;
        cout << "3. ��� ����" << endl;
        cout << "4. ���α׷� ����" << endl;

        fseek(stdin, 0, SEEK_END);
        int input;
        cin >> input;
        if (input == 1) {
            //��� ����
            for(int i=0; i < count; i++) {
                employee[i]->printInfo();
            }
        }
        else if (input == 2){
            //��� �߰�
           char* name = getString("����� �Է����ּ���: ");
           int gender = getInt("������ �Է��� �ּ���(1����, 2����):");
           char* rank = getString("������ �Է����ּ���: ");

           Employee* e = new Employee(name, gender, rank);
           delete[] name;
           delete[] rank;

           employee[count] = e;
           count++;
        }
        else if (input = 3){
            //��� ����
            int number = getInt("�����ȣ�� �Է����ּ���.");
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
            //���α׷� ����
            cout << "���α׷��� �����մϴ�" << endl;
            break;
        }
        else {
            //�ùٸ��� ���� �Է�
            cout << "�Է°��� �ùٸ��� �ʽ��ϴ�." << endl;
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