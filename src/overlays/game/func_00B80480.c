/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
extern u8 D_00C9A91C[], D_00C9A91D[];
extern s32 D_00C9A718[], D_00C9A71C[];
typedef void (*SubstitutionCallback)(s32 value);
extern SubstitutionCallback D_00CBCAB8[];
extern s32 D_00CBCAC0[];
extern void Pes6World_SetActive(s32), func_00182B30(s32), Pes6Ball_SetVisible(s32),
    func_00BF93A0(s32);
#include "pes6/ball.h"
extern void func_009A7540(void), func_00B26FA0(void), func_00B25C50(s32), func_00B7FB10(void),
    func_00C22DF0(const u8 *), func_00B803B0(void);
extern s32 func_00B7E770(void);
static inline s32 specialKind(s32 k) {
    s32 v = 1;
    if (k != 7 && k != 8)
        v = 0;
    return v != 0;
}
void func_00B80480(void) {
    u8 kinds[2], i;
    switch (D_00C9A91C[0]) {
    case 0:
        D_00CBCAB8[0](D_00CBCAC0[0]);
        Pes6World_SetActive(0);
        func_00182B30(0);
        func_009A7540();
        func_00B26FA0();
        Pes6Ball_Current->pos[1] = -50000.0f;
        Pes6Ball_SetVisible(0);
        func_00B25C50(0);
        ++D_00C9A91C[0];
    /* fall through */
    case 1:
        if (!func_00B7E770())
            return;
        D_00C9A91D[0] = 0;
        ++D_00C9A91C[0];
    /* fall through */
    case 2:
        func_00B7FB10();
        for (i = 0; i < 2; ++i) {
            if (D_00C9A710.change[i].side == 0xff)
                break;
            kinds[i] = D_00C9A710.kind[D_00C9A710.details[i].order];
        }
        for (; i < 2; ++i)
            kinds[i] = 0xff;
        func_00C22DF0(kinds);
        D_00C9A91D[0] = 0;
        ++D_00C9A91C[0];
    /* fall through */
    case 3:
        func_00BF93A0(6);
        func_00BF93A0(0);
        if ((u8)specialKind(D_00C9A718[0]))
            goto extraCue;
        if (!(u8)specialKind(D_00C9A71C[0]))
            goto nextPhase;
    extraCue:
        func_00BF93A0(4);
    nextPhase:
        D_00C9A91C[0] = 0;
        D_00C9A710.update = func_00B803B0;
        break;
    }
}
