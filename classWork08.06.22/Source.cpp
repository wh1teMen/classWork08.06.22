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
		cout << "Мяууууу";
	}
	void skill()override {
		cout<<"Играть с клубком";
	}
private:
};

class Dog :public Cat {
public:
	Dog() {}
	
	virtual~Dog() {};
	void sound()override {
		cout << "Гав-Гав";
	}
	void skill()override {
		cout<< "поддаваться дрессировке";
	}

private:
	
};

int main(){
	system("chcp 1251>nul");

	
	
	Dog dog;
	dog.set_name("Псина");
	dog.set_food("Кости");
	dog.set_speed(10);
	cout<<"Название жвотного: " << dog.get_name()<<endl;
	cout<<"Пища: "<< dog.get_food()<<endl;
	cout << "Издоваемый звук: "; dog.sound();
	cout << "\nСкорость: " <<dog.get_speed() << endl;
	cout << "Умение: "; dog.skill();
	cout << endl<<endl;

	Cat cat;
	cat.set_name("Кошка");
	cat.set_food("Молоко");
	cat.set_speed(14);
	cout << "Название жвотного: " << cat.get_name() << endl;
	cout << "Пища: " << cat.get_food() << endl;
	cout << "Издоваемый звук: "; cat.sound();
	cout << "\nСкорость: " << cat.get_speed() << endl;
	cout << "Умение: "; cat.skill();
	cout << endl;
	
	
	











	system("pause>nul");
	return 0;
}