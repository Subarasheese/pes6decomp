/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"

/* The ball's per-frame update during a match: keep last frame's position, state and
 * direction, refresh who owns the ball, run the physics step (Pes6Ball_IntegratePhysics), then the
 * facing, timers and match callbacks. See docs/ball_physics.md.
 *
 * Built with the 2005 compiler build b151: b210 moves branch targets into
 * branch-likely delay slots that this function leaves empty. The original reloads the
 * ball pointer before every statement, which needs propagation off. */

#pragma opt_propagation off

extern float *D_003E74CC;
extern u8 Pes6MatchPlayers[];
extern u8 D_005924B1[];
extern u8 D_005926FD[];

extern void Pes6Ball_IntegratePhysics(int arg0, u8 *state, u8 *speed, float *vy, float *x, float *y, float *z,
                          u16 *dir, float dt, u8 *spin, u8 *curl, u8 *curlDir, u8 *player);
extern s16 func_009B34C0(Pes6Ball *ball, float a, float b, float c, float d);
extern void func_00282F80(void);
extern void func_00284EA0(int arg0);
extern int func_002AE670(int arg0);
extern void func_0093F720(void);
extern void func_00996190(void);
extern void func_009B21E0(void);
extern int Pes6MatchFlow_GetState(int arg0);
extern void func_00C6ACA0(void);

static inline u8 *playerObject(u8 id) {
    int index;
    if (id != 0xFF) {
        index = id % 23;
    } else {
        index = 1;
    }
    return Pes6MatchPlayers + index * 0x240;
}

void Pes6Ball_Update(void) {
    u8 *player;
    u32 id;
    u8 last;
    int k;
    int i;

    player = 0;
    Pes6Ball_Current->prevPos[0] = Pes6Ball_Current->pos[0];
    Pes6Ball_Current->prevPos[1] = Pes6Ball_Current->pos[1];
    Pes6Ball_Current->prevPos[2] = Pes6Ball_Current->pos[2];
    Pes6Ball_Current->prevDir = Pes6Ball_Current->dir;
    Pes6Ball_Current->prevState = Pes6Ball_Current->state;
    Pes6MatchState_Current.touchFrames[0]++;
    Pes6Ball_Current->actionFrames++;
    Pes6MatchState_Current.unkFC = 0;
    id = Pes6MatchState_Current.owner;
    if (id != 0) {
        player = playerObject(id);
        if (player[0x10] == 0 && player[0x16] >= 0x80) {
            Pes6MatchState_Current.unkFC = 1;
        }
    }
    if (Pes6Ball_Current->unk6E > 1 && (u32)(Pes6Ball_Current->action - 1) <= 1) {
        Pes6Ball_Current->unk6E--;
    } else {
        Pes6Ball_Current->unk6E = 1;
    }
    if (D_005926FD[0] == 0) {
        if (Pes6MatchState_Current.touchActors[0] == D_005924B1[0]) {
            Pes6MatchState_Current.lastTouch = Pes6MatchState_Current.touchActors[0];
            k = 0;
        } else {
            Pes6MatchState_Current.lastTouch = Pes6MatchState_Current.touchActors[1];
            k = 1;
        }
        i = k;
        Pes6MatchState_Current.lastSide[0] = Pes6MatchState_Current.touchActors[i];
        i = k + 1;
        Pes6MatchState_Current.lastSide[1] = Pes6MatchState_Current.touchActors[i];
        i = k + 2;
        Pes6MatchState_Current.lastSide[2] = Pes6MatchState_Current.touchActors[i];
    }
    Pes6Ball_IntegratePhysics(0, &Pes6Ball_Current->state, Pes6Ball_Current->speed, &Pes6Ball_Current->vy, &Pes6Ball_Current->pos[0],
                  &Pes6Ball_Current->pos[1], &Pes6Ball_Current->pos[2], &Pes6Ball_Current->dir, *D_003E74CC,
                  Pes6Ball_Current->spin, Pes6Ball_Current->curl, Pes6Ball_Current->curlDir, player);
    last = Pes6MatchState_Current.lastTouch;
    if (last != 0 && last != 0xFF) {
        Pes6Ball_Current->unk5C = func_009B34C0(Pes6Ball_Current, Pes6Ball_Current->unk47C, Pes6Ball_Current->unkB7C,
                                          13465.0f * *(s16 *)(playerObject(last) + 0x14), 0.0f);
    } else {
        id = Pes6MatchState_Current.owner;
        if (id != 0) {
            Pes6Ball_Current->unk5C = func_009B34C0(Pes6Ball_Current, Pes6Ball_Current->unk47C, Pes6Ball_Current->unkB7C,
                                              13465.0f * *(s16 *)(playerObject(id) + 0x14), 0.0f);
        }
    }
    if (Pes6Ball_Current->unk67 != 0) {
        Pes6Ball_Current->unk67--;
    } else {
        func_00282F80();
    }
    if (Pes6Ball_Current->unk65 != 0) {
        Pes6Ball_Current->unk65--;
    }
    func_00C6ACA0();
    func_009B21E0();
    if ((u8)Pes6MatchFlow_GetState(1) != 1) {
        func_0093F720();
    }
    func_00284EA0(func_002AE670(0xE0));
    func_00996190();
}
