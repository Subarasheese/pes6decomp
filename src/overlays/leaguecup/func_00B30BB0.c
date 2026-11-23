/* compiler: mwcc-3.0.1b210 */
#include "pes6/cup_score_rows.h"

typedef struct {
    u16 first;
    u8 reserved02[2];
    u16 second;
    u8 reserved06[2];
} CupSides;
typedef struct {
    s32 leg, extraTime, penalties;
} CupTeamResult;
typedef struct {
    u8 reserved00[0x1c];
    void *values[CUP_SCORE_ROW_COUNT][2], *captions[4];
    u8 reserved5c[4];
    CupSides firstOrder;
    s32 stage;
    CupTeamResult opening[2];
    u8 reserved84[0x24];
    CupSides secondOrder;
    s32 returnLeg;
    CupTeamResult scores[2];
    s32 firstLeg[2];
    u8 reservedD4[0x1a];
    u8 decided;
} CupTieResult;
extern CupTieResult *func_00B30A60(void);
extern void func_009737C0(void *, s8), func_009737E0(void *, s32, ...);
extern const char D_00B34320[];

void func_00B30BB0(void) {
    CupTieResult *p = func_00B30A60();
    if (p) {
        s32 reversed;
        if (p->returnLeg == 0) {
            if (p->firstOrder.first != p->firstOrder.second) {
                reversed = 0;
            } else {
                reversed = 1;
            }
        } else {
            if (p->secondOrder.first != p->secondOrder.second) {
                reversed = 0;
            } else {
                reversed = 1;
            }
        }
        if (p->stage == 0) {
            CUP_SHOW_SCORE_PAIR(p->values[CUP_FIRST_LEG], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_RETURN_LEG], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_TOTAL], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_TIME], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_BEFORE_SHOOTOUT], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_SHOOTOUT], 0);
            func_009737C0(p->captions[0], 1);
            func_009737E0(p->captions[0], 7, D_00B34320);
            func_009737C0(p->captions[1], 0);
            func_009737C0(p->captions[2], 0);
            func_009737C0(p->captions[3], 0);
        } else if (p->stage == 1 && p->returnLeg == 0) {
            CUP_SHOW_SCORE_PAIR(p->values[CUP_FIRST_LEG], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_RETURN_LEG], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_TOTAL], 1);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_TIME], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_BEFORE_SHOOTOUT], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_SHOOTOUT], 0);
            func_009737C0(p->captions[0], 1);
            func_009737E0(p->captions[0], 7, D_00B34320);
            func_009737C0(p->captions[1], 0);
            func_009737C0(p->captions[2], 0);
            func_009737C0(p->captions[3], 0);
            if (reversed == 0) {
                func_009737E0(p->values[CUP_TOTAL][0], 6, p->opening[0].leg);
                func_009737E0(p->values[CUP_TOTAL][1], 8, p->opening[1].leg);
            } else {
                func_009737E0(p->values[CUP_TOTAL][0], 6, p->opening[1].leg);
                func_009737E0(p->values[CUP_TOTAL][1], 8, p->opening[0].leg);
            }
        } else {
            CUP_SHOW_SCORE_PAIR(p->values[CUP_FIRST_LEG], 1);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_RETURN_LEG], 1);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_TOTAL], 1);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_TIME], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_BEFORE_SHOOTOUT], 0);
            CUP_SHOW_SCORE_PAIR(p->values[CUP_SHOOTOUT], 0);
            func_009737C0(p->captions[0], 1);
            func_009737E0(p->captions[0], 7, D_00B34320);
            func_009737C0(p->captions[1], 0);
            func_009737C0(p->captions[2], 0);
            func_009737C0(p->captions[3], 0);
            if (reversed == 0) {
                func_009737E0(p->values[CUP_TOTAL][0], 6,
                              p->firstLeg[0] + (p->scores[0].leg + p->scores[0].extraTime));
                func_009737E0(p->values[CUP_TOTAL][1], 8,
                              p->firstLeg[1] + (p->scores[1].leg + p->scores[1].extraTime));
                func_009737E0(p->values[CUP_FIRST_LEG][0], 2, p->firstLeg[0]);
                func_009737E0(p->values[CUP_FIRST_LEG][1], 4, p->firstLeg[1]);
                func_009737E0(p->values[CUP_RETURN_LEG][0], 3, p->scores[0].leg);
                func_009737E0(p->values[CUP_RETURN_LEG][1], 5, p->scores[1].leg);
            } else {
                func_009737E0(p->values[CUP_TOTAL][0], 6,
                              p->firstLeg[1] + (p->scores[1].leg + p->scores[1].extraTime));
                func_009737E0(p->values[CUP_TOTAL][1], 8,
                              p->firstLeg[0] + (p->scores[0].leg + p->scores[0].extraTime));
                func_009737E0(p->values[CUP_FIRST_LEG][0], 2, p->firstLeg[1]);
                func_009737E0(p->values[CUP_FIRST_LEG][1], 4, p->firstLeg[0]);
                func_009737E0(p->values[CUP_RETURN_LEG][0], 3, p->scores[1].leg);
                func_009737E0(p->values[CUP_RETURN_LEG][1], 5, p->scores[0].leg);
            }
            if (p->scores[0].penalties || p->scores[1].penalties) {
                CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_BEFORE_SHOOTOUT], 1);
                CUP_SHOW_SCORE_PAIR(p->values[CUP_SHOOTOUT], 1);
                func_009737C0(p->captions[1], 1);
                func_009737C0(p->captions[2], 1);
                func_009737C0(p->captions[0], 0);
                func_009737E0(p->captions[1], 10, func_001F08B0(0x1a00a7));
                func_009737E0(p->captions[2], 16, func_001F08B0(0x1a0039));
                if (reversed == 0) {
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][0], 9,
                                  p->scores[0].extraTime);
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][1], 11,
                                  p->scores[1].extraTime);
                    func_009737E0(p->values[CUP_SHOOTOUT][0], 15, p->scores[0].penalties);
                    func_009737E0(p->values[CUP_SHOOTOUT][1], 17, p->scores[1].penalties);
                } else {
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][0], 9,
                                  p->scores[1].extraTime);
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][1], 11,
                                  p->scores[0].extraTime);
                    func_009737E0(p->values[CUP_SHOOTOUT][0], 15, p->scores[1].penalties);
                    func_009737E0(p->values[CUP_SHOOTOUT][1], 17, p->scores[0].penalties);
                }
            } else {
                s32 awayExtra = p->scores[1].extraTime;
                s32 homeExtra = p->scores[0].extraTime;
                if ((p->firstLeg[0] + (p->scores[0].leg + homeExtra)) ==
                        (p->firstLeg[1] + (p->scores[1].leg + awayExtra)) &&
                    p->decided != 1) {
                    if (homeExtra || awayExtra) {
                        CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_BEFORE_SHOOTOUT], 1);
                        func_009737C0(p->captions[1], 1);
                        func_009737C0(p->captions[2], 1);
                        func_009737C0(p->captions[0], 0);
                        func_009737E0(p->captions[1], 10, func_001F08B0(0x1a00a7));
                        func_009737E0(p->captions[2], 16, func_001F08B0(0x1a00a8));
                        if (reversed == 0) {
                            func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][0], 9,
                                          p->scores[0].extraTime);
                            func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][1], 11,
                                          p->scores[1].extraTime);
                        } else {
                            func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][0], 9,
                                          p->scores[1].extraTime);
                            func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][1], 11,
                                          p->scores[0].extraTime);
                        }
                    } else {
                        func_009737C0(p->captions[0], 1);
                        func_009737E0(p->captions[0], 10, func_001F08B0(0x1a00a8));
                    }
                } else if (p->scores[0].extraTime || p->scores[1].extraTime) {
                    CUP_SHOW_SCORE_PAIR(p->values[CUP_EXTRA_TIME], 1);
                    func_009737C0(p->captions[0], 1);
                    func_009737E0(p->captions[0], 10, func_001F08B0(0x1a00a7));
                    if (reversed == 0) {
                        func_009737E0(p->values[CUP_EXTRA_TIME][0], 9, p->scores[0].extraTime);
                        func_009737E0(p->values[CUP_EXTRA_TIME][1], 11, p->scores[1].extraTime);
                    } else {
                        func_009737E0(p->values[CUP_EXTRA_TIME][0], 9, p->scores[1].extraTime);
                        func_009737E0(p->values[CUP_EXTRA_TIME][1], 11, p->scores[0].extraTime);
                    }
                }
            }
        }
    }
}
