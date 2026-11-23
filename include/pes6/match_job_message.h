#ifndef PES6_MATCH_JOB_MESSAGE_H
#define PES6_MATCH_JOB_MESSAGE_H

#include "types.h"
#include "pes6/bitset.h"
typedef struct {
    u8 reserved00[0x2c];
    union {
        u32 word;
        u8 byte;
    } arg[2];
} MatchJob;
extern int Pes6Job_SendMessage(s32 id, struct Pes6BitSet *, s32 mode);
extern void Pes6Job_SetDone(MatchJob *);

#endif
