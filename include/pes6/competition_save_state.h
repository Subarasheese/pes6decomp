#ifndef PES6_COMPETITION_SAVE_STATE_H
#define PES6_COMPETITION_SAVE_STATE_H

#include "types.h"

extern u8 *Pes6SaveData_Current;
extern s32 Pes6SaveData_GetUnavailableFlag(void);

static inline s32 competitionDataUnavailable(void) {
    return Pes6SaveData_GetUnavailableFlag() != 0;
}

#endif
