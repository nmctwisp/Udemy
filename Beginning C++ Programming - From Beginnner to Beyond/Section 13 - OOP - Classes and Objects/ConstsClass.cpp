#include <string>
#include <iostream>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const {
        return name;
    } 
    void set_name(std::string name_val){
        name = name_val;
    }

// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int heal_val, int xp_val);
};

Player::Player()
    :   Player{"None", 0, 0}{
}

Player::Player(std::string name_val)
    :   Player{name_val, 0, 0}{
}

Player::Player(std::string name_val, int health_val, int xp_val)
    :   name{name_val}, 
        health{health_val}, 
        xp{xp_val}{
}

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}

int main() {
    const Player villian = {"Villian", 100, 55};
    Player hero = {"Hero", 100, 15};

    // villian.set_name("Super Villian"); // Compile Error
    cout << villian.get_name() << endl;
    cout << hero.get_name() << endl;
    display_player_name(villian);
    display_player_name(hero);
    return 0;
}