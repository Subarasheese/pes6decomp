/* compiler: mwcc-3.0.1b210 */
#include "types.h"
/* Scores are kept in team order. The first leg is stored separately from
   the return leg, extra time and penalties. A panel can reverse home and away. */
enum CupScoreRow {
    CUP_FIRST_LEG,
    CUP_RETURN_LEG,
    CUP_TOTAL,
    CUP_EXTRA_TIME,
    CUP_EXTRA_BEFORE_SHOOTOUT,
    CUP_SHOOTOUT
};

typedef struct {
    u8 leg, extraTime, penalties;
} CupTeamScore;
typedef struct {
    u8 beforeScores[0x34];
    void *values[6][2][2];
    void *captions[4][2];
    u8 reversed[2];
    CupTeamScore scores[2][2];
    u8 firstLeg[2][2];
    u8 reservedC6[4];
    u8 stage[2], decided[2];
} CupScorePage;
extern CupScorePage *func_00B0BEF0(void);
extern void func_009737C0(void *widget, s8 shown);
extern void func_009737E0(void *widget, s32 id, ...);
extern const char *func_001F08B0(s32 id);
extern const char D_00B339F0[];
static inline const u8 *scoreOrientation(const u8 *data, u8 side) { return data + side; }

void func_00B0ABD0(u8 panel) {
    CupScorePage *p = func_00B0BEF0();
    if (p) {
        const u8 *orientation = scoreOrientation(p->reversed, panel);
        s32 phase = p->stage[panel];
        if (phase == 0) {
            func_009737C0(p->values[CUP_FIRST_LEG][panel][0], 0);
            func_009737C0(p->values[CUP_FIRST_LEG][panel][1], 0);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][0], 0);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][1], 0);
            func_009737C0(p->values[CUP_TOTAL][panel][0], 0);
            func_009737C0(p->values[CUP_TOTAL][panel][1], 0);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][1], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][1], 0);
            func_009737C0(p->captions[0][panel], 1);
            func_009737E0(p->captions[0][panel], 7, D_00B339F0);
            func_009737C0(p->captions[1][panel], 0);
            func_009737C0(p->captions[2][panel], 0);
            func_009737C0(p->captions[3][panel], 0);
        } else if (phase == 1) {
            func_009737C0(p->values[CUP_FIRST_LEG][panel][0], 0);
            func_009737C0(p->values[CUP_FIRST_LEG][panel][1], 0);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][0], 0);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][1], 0);
            func_009737C0(p->values[CUP_TOTAL][panel][0], 1);
            func_009737C0(p->values[CUP_TOTAL][panel][1], 1);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][1], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][1], 0);
            func_009737C0(p->captions[0][panel], 1);
            func_009737E0(p->captions[0][panel], 7, D_00B339F0);
            func_009737C0(p->captions[1][panel], 0);
            func_009737C0(p->captions[2][panel], 0);
            func_009737C0(p->captions[3][panel], 0);
            if (!*orientation) {
                func_009737E0(p->values[CUP_TOTAL][panel][0], 6, p->firstLeg[panel][0]);
                func_009737E0(p->values[CUP_TOTAL][panel][1], 8, p->firstLeg[panel][1]);
            } else {
                func_009737E0(p->values[CUP_TOTAL][panel][0], 6, p->firstLeg[panel][1]);
                func_009737E0(p->values[CUP_TOTAL][panel][1], 8, p->firstLeg[panel][0]);
            }
        } else {
            func_009737C0(p->values[CUP_FIRST_LEG][panel][0], 1);
            func_009737C0(p->values[CUP_FIRST_LEG][panel][1], 1);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][0], 1);
            func_009737C0(p->values[CUP_RETURN_LEG][panel][1], 1);
            func_009737C0(p->values[CUP_TOTAL][panel][0], 1);
            func_009737C0(p->values[CUP_TOTAL][panel][1], 1);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_TIME][panel][1], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][0], 0);
            func_009737C0(p->values[CUP_SHOOTOUT][panel][1], 0);
            func_009737C0(p->captions[0][panel], 1);
            func_009737E0(p->captions[0][panel], 7, D_00B339F0);
            func_009737C0(p->captions[1][panel], 0);
            func_009737C0(p->captions[2][panel], 0);
            func_009737C0(p->captions[3][panel], 0);
            if (!*orientation) {
                func_009737E0(p->values[CUP_TOTAL][panel][0], 6,
                              p->firstLeg[panel][0] +
                                  (p->scores[panel][0].leg + p->scores[panel][0].extraTime));
                func_009737E0(p->values[CUP_TOTAL][panel][1], 8,
                              p->firstLeg[panel][1] +
                                  (p->scores[panel][1].leg + p->scores[panel][1].extraTime));
                func_009737E0(p->values[CUP_FIRST_LEG][panel][0], 2, p->firstLeg[panel][0]);
                func_009737E0(p->values[CUP_FIRST_LEG][panel][1], 4, p->firstLeg[panel][1]);
                func_009737E0(p->values[CUP_RETURN_LEG][panel][0], 3, p->scores[panel][0].leg);
                func_009737E0(p->values[CUP_RETURN_LEG][panel][1], 5, p->scores[panel][1].leg);
            } else {
                func_009737E0(p->values[CUP_TOTAL][panel][0], 6,
                              p->firstLeg[panel][1] +
                                  (p->scores[panel][1].leg + p->scores[panel][1].extraTime));
                func_009737E0(p->values[CUP_TOTAL][panel][1], 8,
                              p->firstLeg[panel][0] +
                                  (p->scores[panel][0].leg + p->scores[panel][0].extraTime));
                func_009737E0(p->values[CUP_FIRST_LEG][panel][0], 2, p->firstLeg[panel][1]);
                func_009737E0(p->values[CUP_FIRST_LEG][panel][1], 4, p->firstLeg[panel][0]);
                func_009737E0(p->values[CUP_RETURN_LEG][panel][0], 3, p->scores[panel][1].leg);
                func_009737E0(p->values[CUP_RETURN_LEG][panel][1], 5, p->scores[panel][0].leg);
            }
            if (p->scores[panel][0].penalties || p->scores[panel][1].penalties) {
                func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 1);
                func_009737C0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 1);
                func_009737C0(p->values[CUP_SHOOTOUT][panel][0], 1);
                func_009737C0(p->values[CUP_SHOOTOUT][panel][1], 1);
                func_009737C0(p->captions[1][panel], 1);
                func_009737C0(p->captions[2][panel], 1);
                func_009737C0(p->captions[0][panel], 0);
                func_009737E0(p->captions[1][panel], 10, func_001F08B0(0x1a00a7));
                func_009737E0(p->captions[2][panel], 16, func_001F08B0(0x1a0039));
                if (!*orientation) {
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 9,
                                  p->scores[panel][0].extraTime);
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 11,
                                  p->scores[panel][1].extraTime);
                    func_009737E0(p->values[CUP_SHOOTOUT][panel][0], 15,
                                  p->scores[panel][0].penalties);
                    func_009737E0(p->values[CUP_SHOOTOUT][panel][1], 17,
                                  p->scores[panel][1].penalties);
                } else {
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][0], 9,
                                  p->scores[panel][1].extraTime);
                    func_009737E0(p->values[CUP_EXTRA_BEFORE_SHOOTOUT][panel][1], 11,
                                  p->scores[panel][0].extraTime);
                    func_009737E0(p->values[CUP_SHOOTOUT][panel][0], 15,
                                  p->scores[panel][1].penalties);
                    func_009737E0(p->values[CUP_SHOOTOUT][panel][1], 17,
                                  p->scores[panel][0].penalties);
                }
            } else {
                s32 awayExtra = p->scores[panel][1].extraTime;
                s32 homeExtra = p->scores[panel][0].extraTime;
                if ((p->firstLeg[panel][0] + (p->scores[panel][0].leg + homeExtra)) ==
                        (p->firstLeg[panel][1] + (p->scores[panel][1].leg + awayExtra)) &&
                    p->decided[panel] != 1) {
                    if (homeExtra || awayExtra) {
                        func_009737C0(p->values[CUP_EXTRA_TIME][panel][0], 1);
                        func_009737C0(p->values[CUP_EXTRA_TIME][panel][1], 1);
                        func_009737C0(p->captions[1][panel], 1);
                        func_009737C0(p->captions[2][panel], 1);
                        func_009737C0(p->captions[0][panel], 0);
                        func_009737E0(p->captions[1][panel], 10, func_001F08B0(0x1a00a7));
                        func_009737E0(p->captions[2][panel], 16, func_001F08B0(0x1a00a8));
                        if (!*orientation) {
                            func_009737E0(p->values[CUP_EXTRA_TIME][panel][0], 9,
                                          p->scores[panel][0].extraTime);
                            func_009737E0(p->values[CUP_EXTRA_TIME][panel][1], 11,
                                          p->scores[panel][1].extraTime);
                        } else {
                            func_009737E0(p->values[CUP_EXTRA_TIME][panel][0], 9,
                                          p->scores[panel][1].extraTime);
                            func_009737E0(p->values[CUP_EXTRA_TIME][panel][1], 11,
                                          p->scores[panel][0].extraTime);
                        }
                    } else {
                        func_009737E0(p->captions[0][panel], 7, func_001F08B0(0x1a00a8));
                    }
                } else if (p->scores[panel][0].extraTime || p->scores[panel][1].extraTime) {
                    func_009737C0(p->values[CUP_EXTRA_TIME][panel][0], 1);
                    func_009737C0(p->values[CUP_EXTRA_TIME][panel][1], 1);
                    func_009737C0(p->captions[0][panel], 1);
                    func_009737E0(p->captions[0][panel], 10, func_001F08B0(0x1a00a7));
                    if (!*orientation) {
                        func_009737E0(p->values[CUP_EXTRA_TIME][panel][0], 9,
                                      p->scores[panel][0].extraTime);
                        func_009737E0(p->values[CUP_EXTRA_TIME][panel][1], 11,
                                      p->scores[panel][1].extraTime);
                    } else {
                        func_009737E0(p->values[CUP_EXTRA_TIME][panel][0], 9,
                                      p->scores[panel][1].extraTime);
                        func_009737E0(p->values[CUP_EXTRA_TIME][panel][1], 11,
                                      p->scores[panel][0].extraTime);
                    }
                }
            }
        }
    }
}
