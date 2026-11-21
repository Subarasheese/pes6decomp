/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"

void func_00BE3F70(Pes6EditPlayerParams *dst, const Pes6EditPlayerParams *src) {
    dst->specialDribbling = src->specialDribbling;
    dst->tacticalDribble = src->tacticalDribble;
    dst->postPlayer = src->postPlayer;
    dst->positioning = src->positioning;
    dst->reaction = src->reaction;
    dst->linePosition = src->linePosition;
    dst->scoring = src->scoring;
    dst->playmaking = src->playmaking;
    dst->passing = src->passing;
    dst->penalties = src->penalties;
    dst->oneOnOneScoring = src->oneOnOneScoring;
    dst->longThrow = src->longThrow;
    dst->oneTouchPass = src->oneTouchPass;
    dst->side = src->side;
    dst->centre = src->centre;
    dst->outside = src->outside;
    dst->marking = src->marking;
    dst->defensiveLineControl = src->defensiveLineControl;
    dst->sliding = src->sliding;
    dst->penaltyStopper = src->penaltyStopper;
    dst->oneOnOneStopper = src->oneOnOneStopper;
    dst->middleShooting = src->middleShooting;
    dst->covering = src->covering;
}
