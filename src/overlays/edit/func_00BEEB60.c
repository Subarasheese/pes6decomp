/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
u32 func_00BEEB60(const Pes6EditPlayerParams *player) {
    return (player->specialDribbling ? 0x1 : 0) | (player->tacticalDribble ? 0x2 : 0) |
           (player->positioning ? 0x4 : 0) | (player->reaction ? 0x8 : 0) |
           (player->playmaking ? 0x10 : 0) | (player->passing ? 0x20 : 0) |
           (player->scoring ? 0x40 : 0) | (player->oneOnOneScoring ? 0x80 : 0) |
           (player->postPlayer ? 0x100 : 0) | (player->linePosition ? 0x200 : 0) |
           (player->middleShooting ? 0x400 : 0) | (player->side ? 0x800 : 0) |
           (player->centre ? 0x1000 : 0) | (player->penalties ? 0x2000 : 0) |
           (player->oneTouchPass ? 0x4000 : 0) | (player->outside ? 0x8000 : 0) |
           (player->marking ? 0x10000 : 0) | (player->sliding ? 0x20000 : 0) |
           (player->covering ? 0x40000 : 0) | (player->defensiveLineControl ? 0x80000 : 0) |
           (player->penaltyStopper ? 0x100000 : 0) | (player->oneOnOneStopper ? 0x200000 : 0) |
           (player->longThrow ? 0x400000 : 0);
}
