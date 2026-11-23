#ifndef PES6_MATCH_PRESENTATION_H
#define PES6_MATCH_PRESENTATION_H

#include "types.h"
typedef struct Presentation Presentation;
struct Presentation {
    s32 (*next)(Presentation *);
    u8 reserved[0x14];
    void *work;
};
extern void func_00305E60(Presentation *, s32 (*)(Presentation *));

#endif
