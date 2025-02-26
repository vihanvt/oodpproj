#include <bits/stdc++.h>
using namespace std;
class Player{
private:
    string name;
    int level;
    int exppoints;
public:
    Player(string n = "", int l = 1, int exp = 0) {
        name = n;
        level = l;
        exppoints = exp;
    }
    Player(const Player &obj1) {
        name = obj1.name;
        level = obj1.level;
        exppoints = obj1.exppoints;
        cout << "The player profile is duplicated with player name " << name << " level " << level << " and experience points " << exppoints << endl;
    }
};
int main(){
    Player player1("Vihan", 10, 500);
    Player player2 = player1; 
    return 0; 
}
