#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	Animal() {}
	Animal(string name, string food, int speed) {
		name_ = name;
		food_ = food;
		speed_ = speed;
	}
	~Animal() {}
	void set_name(string name) {
		name_ = name;
	}
	string get_name()const {
		return name_;
	}
	void set_food(string food) {
		food_ = food;
	}
	string get_food()const {
		return food_;
	}
	void set_speed(int speed) {
		speed_= speed;
	}
	int get_speed() {
		return speed_;
	}
	virtual void sound() {
		cout << " ";
	}
	virtual void skill() {
		 cout << "";
	}
	private:
		string name_=" ";
		string food_=" ";
		int speed_=0;

};

class Cat :public Animal {
public:
	Cat() :Animal() {}
	Cat(string name, string food, int speed):Animal(name,food,speed) {}
	virtual~Cat(){}

	void sound()override {
		cout << "�������";
	}
	void skill()override {
		cout<<"������ � �������";
	}
private:
};

class Dog :public Cat {
public:
	Dog() {}
	
	virtual~Dog() {};
	void sound()override {
		cout << "���-���";
	}
	void skill()override {
		cout<< "����������� �����������";
	}

private:
	
};

int main(){
	system("chcp 1251>nul");

	
	
	Dog dog;
	dog.set_name("�����");
	dog.set_food("�����");
	dog.set_speed(10);
	cout<<"�������� ��������: " << dog.get_name()<<endl;
	cout<<"����: "<< dog.get_food()<<endl;
	cout << "���������� ����: "; dog.sound();
	cout << "\n��������: " <<dog.get_speed() << endl;
	cout << "������: "; dog.skill();
	cout << endl<<endl;

	Cat cat;
	cat.set_name("�����");
	cat.set_food("������");
	cat.set_speed(14);
	cout << "�������� ��������: " << cat.get_name() << endl;
	cout << "����: " << cat.get_food() << endl;
	cout << "���������� ����: "; cat.sound();
	cout << "\n��������: " << cat.get_speed() << endl;
	cout << "������: "; cat.skill();
	cout << endl;
	
	
	











	system("pause>nul");
	return 0;
}