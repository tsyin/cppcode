#include <iostream>
using namespace std;

struct EnemyShip
{
    int x_posi;
    int y_posi;
    int weapon_power;
    int blood;
    EnemyShip *nextShip;
};
struct EnemyList
{
    EnemyShip *head;
    int enemyShipCount;
};

EnemyShip *createEnemyShip(int posx, int posy, int level);
void addList(EnemyList *el, EnemyShip *es);

int main()
{
    EnemyList *enemyList = new EnemyList;
    enemyList->enemyShipCount = 0;
    enemyList->head = NULL;
    addList(enemyList,createEnemyShip(0,0,1));
    return 0;
}

EnemyShip *createEnemyShip(int posx, int posy, int level)
{
    enum
    {
        lev_bl_1 = 100,
        lev_bl_2 = 200,
        lev_bl_3 = 300,
        lev_bl_4 = 400,
        lev_bl_5 = 500,
    };
    enum
    {
        lev_wp_1 = 10,
        lev_wp_2 = 20,
        lev_wp_3 = 30,
        lev_wp_4 = 40,
        lev_wp_5 = 50,
    };
    EnemyShip *enemyShip = new EnemyShip;
    enemyShip->x_posi = posx;
    enemyShip->y_posi = posy;
    enemyShip->blood = lev_bl_1;
    enemyShip->weapon_power = lev_wp_1;
    enemyShip->nextShip = NULL;
    return enemyShip;
}

void addList(EnemyList *el, EnemyShip *es)
{
    if (el->head == NULL)
    {
        el->head = es;
        el->enemyShipCount = 1;
    }
    else
    {
        EnemyShip* temp;
        temp = el->head;
        while(temp != NULL)
        {
            temp = temp->nextShip;
        }
        temp->nextShip = es;
        el->enemyShipCount ++;
    }
}