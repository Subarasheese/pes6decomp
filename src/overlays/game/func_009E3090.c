/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
#include "pes6/ball.h"
#include "pes6/shootout_player.h"

extern u8 D_00CBBE00[];
extern s32 func_002DCA30(void);
extern u8 D_00591E4D[], D_00591BE4[], D_00591F14[], D_005926E6[];
extern f32 D_005926D8[];
extern s32 func_008481D0(void), func_009B30B0(u16 direction, u16 target), func_009B22D0(f32 x),
    func_009B1FF0(void);
extern void func_009B0970(void);
void func_009E3090(void) {
    ShootoutPlayer *taker;
    s32 x, z, aligned;
    if (func_002DCA30() && func_008481D0())
        return;
    x = (s32)Pes6Ball_Current->pos[0];
    x = x > 0 ? x : -x;
    z = (s32)Pes6Ball_Current->pos[2];
    z = z > 0 ? z : -z;
    if ((s32)Pes6Ball_Current->pos[0] <= 0) {
        if ((u16)func_009B30B0(Pes6Ball_Current->dir, 0x8000) < 73)
            aligned = 1;
        else
            aligned = 0;
    } else {
        if ((u16)func_009B30B0(Pes6Ball_Current->dir, 0) < 73)
            aligned = 1;
        else
            aligned = 0;
    }
    if (!((f32)x <= 13465.0f))
        func_009B0970();
    taker = (ShootoutPlayer *)Pes6MatchPlayer_Get(D_00591E4D[0]);
    if (taker->active) {
        if (D_00591F14[0])
            D_00CBBE00[0] = 0;
        if ((f32)x <= 13465.0f && Pes6Ball_Current->horizontalSpeed == 0 &&
            Pes6Ball_Current->pos[1] == -28.0f)
            D_00CBBE00[0] = 0;
        if (!aligned && (f32)x <= 12697.0f && !(D_005926D8[0] <= (f32)(u32)D_005926E6[0]))
            D_00CBBE00[0] = 0;
        if (!((f32)z < 991.0f))
            D_00CBBE00[0] = 0;
        if (taker->frames < 5 * D_00591BE4[0])
            ++taker->frames;
        else
            D_00CBBE00[0] = 0;
        if (func_009B22D0(Pes6Ball_Current->pos[0])) {
            if (func_009B1FF0())
                D_00CBBE00[0] = 1;
            else
                D_00CBBE00[0] = 0;
        }
    }
}
