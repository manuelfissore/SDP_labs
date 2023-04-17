#include <iostream>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;
typedef struct player{
    string name;
    int score;
}Player;


template <typename T>
Player cmp (const T& v1, const T& v2){
    return((v1>v2)?true:false);
}


class LeaderBord {
private:
    set <Player, > board;
    public:
        void addPlayer(const std::string& name, int score){
            Player p;
            p.name=name;
            p.score=score;
            board.insert(board.begin(), (Player) p);
        };
        void removePlayer(const std::string& name){
            for(auto it: board){
                if (it.name==name)
                    board.erase(it);
            }
        };
        void updateScore(const std::string& name, int newScore){
            for(auto it: board){
                if (it.name==name)
                    it.score=newScore;
            }
        };
        void printTopPlayers(int n){

        };
};


int main() {
    LeaderBord leaderBord;
    int v, n;
    int flag=1;
    player p;
    while (cin>>v && flag){
        switch(v){
            case 1:
                cout<<"aggiungi nome giocatore"<<endl;
                cin>>p.name;
                cout<<"aggiungi score"<<endl;
                cin>>p.score;
                leaderBord.addPlayer(p.name, p.score);
                break;
            case 2:
                cout<<"nome del giocatore da eliminare"<<endl;
                cin>>p.name;
                leaderBord.removePlayer(p.name);
                break;
            case 3:
                cout<<"nome del giocatore da modificare"<<endl;
                cin>>p.name;
                cout<<"nuovo score"<<endl;
                cin>>p.score;
                leaderBord.updateScore(p.name, p.score);
                break;
            case 4:
                cout<<"quante posizioni vuoi vedere?"<<endl;
                cin>>n;
                leaderBord.printTopPlayers(n);
                break;
            default:
                flag=!flag;
                break;
        }
    }


    return 0;
}
