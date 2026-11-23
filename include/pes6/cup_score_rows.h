#ifndef PES6_CUP_SCORE_ROWS_H
#define PES6_CUP_SCORE_ROWS_H

#include "types.h"

enum CupScoreRow {
    CUP_FIRST_LEG,
    CUP_RETURN_LEG,
    CUP_TOTAL,
    CUP_EXTRA_TIME,
    CUP_EXTRA_BEFORE_SHOOTOUT,
    CUP_SHOOTOUT,
    CUP_SCORE_ROW_COUNT
};

extern void func_009737C0(void *widget, s8 shown);
extern void func_009737E0(void *widget, s32 id, ...);
extern s32 func_001F08B0(s32 id);

#define CUP_SHOW_SCORE_PAIR(pair, shown) \
    do { \
        func_009737C0((pair)[0], (shown)); \
        func_009737C0((pair)[1], (shown)); \
    } while (0)

#endif
