#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    Animal(const string& name, int age) : name(name), age(age) {
    }

    virtual void eat() {
        cout << getName() << " the animal who is " << getAge() << " ate some food" << endl;
    }

    virtual void swim() {
        cout << getName() << " the animal who is " << getAge() << " had a swim" << endl;
    }

    virtual void makeSound() {
        cout << getName() << " the animal who is " << getAge() << " is making sounds" << endl;
    }
    virtual ~Animal() {}

    const string& getName() const {
        return name;
    }
    const int& getAge() const {
        return age;
    }
};

class Zebra : public Animal {
public:
    string size;
    int numberOfLegs;
    Zebra(const string& name, const int& age, string size, int numberOfLegs) : Animal(name, age), size(size), numberOfLegs(numberOfLegs) {}

    void walk() {
        cout << getName() << " the zebra who is " << getAge() << " had a great walk" << endl;
    }
    void pet() {
        cout << getName() << " the zebra who is " << getAge() << " is being pet" << endl;
    }

    void eat() override {
        cout << getName() << " the zebra who is " << getAge() << " enjoyed some grass" << endl;
    }
};

class Giraffe : public Animal {
public:
    string lenghtOfNeck;
    int numberOfSpots;
    Giraffe(const string& name, const int& age, string lenghtOfNeck, int numberOfSpots) : Animal(name, age) , lenghtOfNeck(lenghtOfNeck), numberOfSpots(numberOfSpots) {}

    void hide() {
        cout << getName() << " the giraffe who is " << getAge() << " is hiding from the hunter" << endl;
    }
    void searchForFood() {
        cout << getName() << " the giraffe who is " << getAge() << " is looking for some tasty leaves" << endl;
    }

    void eat() override {
        cout << getName() << " the giraffe who is " << getAge() << " found a tree and ate all of the leaves on it" << endl;
    }
};

class Flamingo : public Animal {
public:
    bool canFly;
    string shadeOfPink;
    Flamingo(const string& name, const int& age, bool canFly, string shadeOfPink) : Animal(name, age), canFly(canFly), shadeOfPink(shadeOfPink) {}

    void layEggs() {
        cout << getName() << " the flamingo who is " << getAge() << " is laying eggs" << endl;
    }
    void tryToFly() {
        cout << getName() << " the flamingo who is " << getAge() << " keeps trying to fly" << endl;
    }

    void eat() override {
        cout << getName() << " the flamingo who is " << getAge() << " ate a shrimp" << endl;
    }
};
class Hipopotam : public Animal {
public:
    bool isHeavy;
    int weight;
    Hipopotam(const string& name, const int& age, bool isHeavy, int weight) : Animal(name, age), isHeavy(isHeavy), weight(weight) {}

    void jump() {
        cout << getName() << " the hipopotam who is " << getAge() << " jumps into the water!" << endl;
    }
    void tan() {
        cout << getName() << " the hipopotam who is " << getAge() << " enjoys tanning" << endl;
    }

    void swim() override {
        cout << getName() << " the hipopotam who is " << getAge() << " was swimming all day long" << endl;
    }
};

int main() {
    Zebra zebra("Marty", 24, "big", 4);
    zebra.swim();
    zebra.makeSound();
    zebra.walk();
    zebra.pet();
    zebra.eat();

    cout << endl;

    Giraffe giraffe("Melman", 27, "long", 172);
    giraffe.swim();
    giraffe.makeSound();
    giraffe.hide();
    giraffe.searchForFood();
    giraffe.eat();

    cout << endl;

    Flamingo flamingo("Mike", 34, true,"dark");
    flamingo.swim();
    flamingo.makeSound();
    flamingo.layEggs();
    flamingo.tryToFly();
    flamingo.eat();

    cout << endl;

    Hipopotam hipopotam("Gloria", 25, true, 82);
    hipopotam.eat();
    hipopotam.makeSound();
    hipopotam.jump();
    hipopotam.tan();
    hipopotam.swim();

    return 0;
}
