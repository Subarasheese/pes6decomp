/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"
s32 func_0017F900(void);
M2C_UNK func_001E7140(s32);
M2C_UNK func_001E75A0(s32, void *);
M2C_UNK func_001FC840(M2C_UNK);
s32 func_00901320(void);
M2C_UNK func_009013F0(void);
M2C_UNK func_00901440(void);
extern s32 D_005E5DF0[];
extern s32 D_005E5DF8[];
extern s32 D_005E5E10[];

s32 func_002D6860(void) {
    struct {s32 x,y;} pair;
    s32 done;
    s32 state;
    s32 ready;

    done=0;
    state=D_005E5DF0[0];
    switch(state) {
    case 0:
        ready = 0;
        switch (D_005E5E10[0]) {
        case 0:
            func_001FC840(8);
            D_005E5E10[0] += 1;
            break;
        case 1:
            if (func_0017F900() == 1) {
                D_005E5E10[0] += 1;
            default:
                ready = 1;
            }
            break;
        }
        if (ready == 1) {
            pair.x = 1;
            pair.y = 1;
            func_001E75A0(D_005E5DF8[0], &pair);
            state += 1;
        }
        break;
    case 1:
        if (func_0017F900() == 1) {
            state += 1;
        case 2:
            func_00901440();
            state += 1;
        case 3:
            if (func_00901320() != 0) {
                state += 1;
            case 4:
                func_001E7140(D_005E5DF8[0]);
                func_009013F0();
                state += 1;
            default:
                done = 1;
            }
        }
        break;
    }
    D_005E5DF0[0] = state;
    return done;
}
