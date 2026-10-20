/* compiler: mwcc-3.0.1b151 */
#include "types.h"

/* The ball's per-frame update during a match: keep last frame's position, state and
 * direction, refresh who owns the ball, run the physics step (func_00285100), then the
 * facing, timers and match callbacks. See docs/ball_physics.md.
 *
 * Built with the 2005 compiler build b151: b210 moves branch targets into
 * branch-likely delay slots that this function leaves empty. The original reloads the
 * ball pointer before every statement, which needs propagation off. */

#pragma opt_propagation off

typedef struct Pes6Ball {
    u8 pad00[0x10];
    float pos[3];      /* 0x10 */
    u8 pad1C[0x4];
    float prevPos[3];  /* 0x20 */
    u8 pad2C[0x4];
    float vy;          /* 0x30 vertical velocity, 1/256 unit per tick, negative = up */
    u8 pad34[0x1C];
    u8 speed[0x8];     /* 0x50 s32 horizontal speed, 1/256 unit per tick */
    u16 dir;           /* 0x58 direction of travel, 0x10000 = full turn */
    u16 prevDir;       /* 0x5A */
    s16 unk5C;         /* 0x5C */
    u8 pad5E[0x4];
    u8 state;          /* 0x62 0 dead, 1 air, 2 rolling, 3 at feet, 4 placed */
    u8 prevState;      /* 0x63 */
    u8 pad64;
    u8 unk65;          /* 0x65 */
    u8 pad66;
    u8 unk67;          /* 0x67 */
    u8 pad68[0x2];
    u8 curl[0x2];      /* 0x6A */
    u8 curlDir[0x2];   /* 0x6C */
    u16 unk6E;         /* 0x6E */
    u8 pad70[0x4];
    u8 spin[0x10];     /* 0x74 s32 */
    u16 unk84;         /* 0x84 */
    u8 pad86[0x2];
    s32 unk88;         /* 0x88 */
    u8 pad8C[0x3F0];
    float unk47C;      /* 0x47C */
    u8 pad480[0x6FC];
    float unkB7C;      /* 0xB7C */
} Pes6Ball;

extern Pes6Ball *D_003E7574;
extern float *D_003E74CC;
extern u8 D_0058E5B0[];
typedef struct Pes6MatchState {
    u8 owner;          /* 0x00 0x591E18 */
    u8 side[3];        /* 0x01 */
    u8 pad04[0x8];
    s32 frame;         /* 0x0C 0x591E24 */
    u8 pad10[0x2F];
    u8 lastTouch;      /* 0x3F 0x591E57 */
    u8 pad40[0xC];
    u8 lastSide[3];    /* 0x4C 0x591E64 */
    u8 pad4F[0xAD];
    u8 unkFC;          /* 0xFC 0x591F14 */
} Pes6MatchState;
extern Pes6MatchState D_00591E18;
extern u8 D_005924B1[];
extern u8 D_005926FD[];

extern void func_00285100(int arg0, u8 *state, u8 *speed, float *vy, float *x, float *y, float *z,
                          u16 *dir, float dt, u8 *spin, u8 *curl, u8 *curlDir, u8 *player);
extern s16 func_009B34C0(Pes6Ball *ball, float a, float b, float c, float d);
extern void func_00282F80(void);
extern void func_00284EA0(int arg0);
extern int func_002AE670(int arg0);
extern void func_0093F720(void);
extern void func_00996190(void);
extern void func_009B21E0(void);
extern int func_009E1C90(int arg0);
extern void func_00C6ACA0(void);

static inline u8 *playerObject(u8 id) {
    int index;
    if (id != 0xFF) {
        index = id % 23;
    } else {
        index = 1;
    }
    return D_0058E5B0 + index * 0x240;
}

void Pes6Ball_Update(void) {
    u8 *player;
    u32 id;
    u8 last;
    int k;
    int i;

    player = 0;
    D_003E7574->prevPos[0] = D_003E7574->pos[0];
    D_003E7574->prevPos[1] = D_003E7574->pos[1];
    D_003E7574->prevPos[2] = D_003E7574->pos[2];
    D_003E7574->prevDir = D_003E7574->dir;
    D_003E7574->prevState = D_003E7574->state;
    D_00591E18.frame++;
    D_003E7574->unk88++;
    D_00591E18.unkFC = 0;
    id = D_00591E18.owner;
    if (id != 0) {
        player = playerObject(id);
        if (player[0x10] == 0 && player[0x16] >= 0x80) {
            D_00591E18.unkFC = 1;
        }
    }
    if (D_003E7574->unk6E > 1 && (u32)(D_003E7574->unk84 - 1) <= 1) {
        D_003E7574->unk6E--;
    } else {
        D_003E7574->unk6E = 1;
    }
    if (D_005926FD[0] == 0) {
        if (D_00591E18.side[0] == D_005924B1[0]) {
            D_00591E18.lastTouch = D_00591E18.side[0];
            k = 0;
        } else {
            D_00591E18.lastTouch = D_00591E18.side[1];
            k = 1;
        }
        i = k;
        D_00591E18.lastSide[0] = D_00591E18.side[i];
        i = k + 1;
        D_00591E18.lastSide[1] = D_00591E18.side[i];
        i = k + 2;
        D_00591E18.lastSide[2] = D_00591E18.side[i];
    }
    func_00285100(0, &D_003E7574->state, D_003E7574->speed, &D_003E7574->vy, &D_003E7574->pos[0],
                  &D_003E7574->pos[1], &D_003E7574->pos[2], &D_003E7574->dir, *D_003E74CC,
                  D_003E7574->spin, D_003E7574->curl, D_003E7574->curlDir, player);
    last = D_00591E18.lastTouch;
    if (last != 0 && last != 0xFF) {
        D_003E7574->unk5C = func_009B34C0(D_003E7574, D_003E7574->unk47C, D_003E7574->unkB7C,
                                          13465.0f * *(s16 *)(playerObject(last) + 0x14), 0.0f);
    } else {
        id = D_00591E18.owner;
        if (id != 0) {
            D_003E7574->unk5C = func_009B34C0(D_003E7574, D_003E7574->unk47C, D_003E7574->unkB7C,
                                              13465.0f * *(s16 *)(playerObject(id) + 0x14), 0.0f);
        }
    }
    if (D_003E7574->unk67 != 0) {
        D_003E7574->unk67--;
    } else {
        func_00282F80();
    }
    if (D_003E7574->unk65 != 0) {
        D_003E7574->unk65--;
    }
    func_00C6ACA0();
    func_009B21E0();
    if ((u8)func_009E1C90(1) != 1) {
        func_0093F720();
    }
    func_00284EA0(func_002AE670(0xE0));
    func_00996190();
}
