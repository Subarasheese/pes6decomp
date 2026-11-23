#ifndef PES6_MASTER_PLAYER_RATINGS_H
#define PES6_MASTER_PLAYER_RATINGS_H

#include "types.h"
typedef struct {
    unsigned int attack : 7;
    unsigned int defence : 7;
    unsigned int balance : 7;
    unsigned int stamina : 7;
    unsigned int : 4;
    unsigned int speed : 7;
    unsigned int accel : 7;
    unsigned int response : 7;
    unsigned int agility : 7;
    unsigned int condition : 3;
    unsigned int : 1;
    unsigned int dribAcc : 7;
    unsigned int dribSpe : 7;
    unsigned int sPassAcc : 7;
    unsigned int sPassSpe : 7;
    unsigned int wfa : 3;
    unsigned int : 1;
    unsigned int lPassAcc : 7;
    unsigned int lPassSpe : 7;
    unsigned int shotAcc : 7;
    unsigned int shotPow : 7;
    unsigned int wff : 3;
    unsigned int : 1;
    unsigned int shotTec : 7;
    unsigned int fk : 7;
    unsigned int curling : 7;
    unsigned int heading : 7;
    unsigned int ageTens : 4;
    unsigned int jump : 7;
    unsigned int tech : 7;
    unsigned int aggress : 7;
    unsigned int mental : 7;
    unsigned int ageUnits : 4;
    unsigned int gkAbil : 7;
    unsigned int team : 7;
    unsigned int field22 : 8;
    unsigned int : 10;
} MasterPlayerRatings;
typedef struct {
    u8 reserved00[0x11624];
    MasterPlayerRatings ratings[4597];
} MasterLeagueData;
extern MasterLeagueData *Pes6SaveData_GetBlockE970(void);

#endif
