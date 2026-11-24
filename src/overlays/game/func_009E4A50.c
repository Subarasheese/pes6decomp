/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 : 1;
    u8 active : 1;
    u8 : 1;
    u8 complete : 1;
    u8 : 1;
    u8 longWait : 1;
    u8 : 2;
} ShootoutPresentationFlags;
extern ShootoutPresentationFlags D_008B14CC[];
extern u8 D_00591DB4[], D_00CBBDF4[], D_00CBBE00[], D_008B14E2[], D_003EA758;
extern s32 D_00591E14[], D_008B14DC[], D_008B14D0[];
extern s16 *func_008472D0(void);
extern s32 func_002DCA30(void), func_008481D0(void), func_00152130(s32 input, s8 mask),
    func_002A87C0(void), func_0084CD20(s32 value, u8 *state), func_0029AC20(void);
extern void func_00AD0A20(void), Pes6Ball_Update(void), func_0093F720(void),
    func_002561A0(s32 event);
extern void func_0084CDD0(s32 active, s32 id, u8 *state),
    func_00853B50(s32, s32, s32, s32, s16, s32, s32, s32);
extern void func_00B76710(void), func_009E3090(void), func_00B24970(s32 outcome),
    Pes6MatchFlow_SetState(s32 index, s8 state);
static inline void sendShootoutEvent(s32 event, s32 value) {
    func_00853B50(1, event, value, 0, *func_008472D0(), 0, 0, 0);
}
void func_009E4A50(void) {
    if (!func_002DCA30() || !func_008481D0()) {
        func_00AD0A20();
        Pes6Ball_Update();
    }
    func_0093F720();
    if (!func_00152130(0, 16))
        return;
    if (func_002A87C0() == 0)
        D_00591DB4[0] = 1;
    else
        D_00591DB4[0] = 0;
    if (!D_003EA758) {
        func_002561A0(5);
        D_003EA758 = 1;
    }
    if (func_002DCA30()) {
        func_0084CDD0(1, *func_008472D0(), D_008B14E2);
        func_008472D0();
        if (D_008B14CC[0].active) {
            if (D_008B14CC[0].complete)
                sendShootoutEvent(12, 2);
            else {
                if (D_008B14DC[0] - D_008B14D0[0] < 5500 && !D_008B14CC[0].longWait)
                    sendShootoutEvent(12, 1);
                if (D_00CBBDF4[0])
                    sendShootoutEvent(9, 0);
            }
        }
        if (!D_008B14CC[0].active && func_0084CD20(-1, D_008B14E2))
            sendShootoutEvent(8, 5);
    }
    func_00B76710();
    if (func_0029AC20())
        return;
    if (D_00CBBE00[0] == 0xff)
        func_009E3090();
    if (D_00CBBE00[0] != 0xff) {
        func_00B24970(D_00CBBE00[0]);
        D_00591E14[0] = 0;
        D_003EA758 = 0;
        Pes6MatchFlow_SetState(2, 9);
    }
}
