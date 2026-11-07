/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0017F900();
s32 func_001DA380(M2C_UNK);
M2C_UNK func_001DA550(M2C_UNK, f32 *);
M2C_UNK func_001E7140(s32);
M2C_UNK func_001E75A0(s32, void *);
M2C_UNK func_001F0210(s32);
M2C_UNK func_001F04F0(s32, void *);
M2C_UNK func_001F87E0(M2C_UNK, M2C_UNK);
M2C_UNK func_001FC840(M2C_UNK);
M2C_UNK func_0020B660(M2C_UNK);
M2C_UNK func_00240C30();
s32 func_009005A0();
s32 func_009009D0();
M2C_UNK func_00900A10();
extern f32 D_003B2660[];
extern f32 D_003B2664[];
extern u32 D_005E5E00[];
extern s32 D_005E5E04[];
extern s32 D_005E5E08[];
extern s32 D_005E5E0C[];
extern s32 D_005E5E10[];

typedef struct { s32 x, y; } IntPair;
s32 func_002D65F0(void) {
    IntPair pair;
    struct {f32 x,y;} firstPair;
    s32 done;
    u32 state;
    s32 ready;

    state = D_005E5E00[0];
    done = 0;
    switch (state) {
    case 0:
        func_001F87E0(1, 0x80);
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
            func_001E75A0(D_005E5E08[0], &pair.x);
            func_001F04F0(D_005E5E0C[0], &pair.x);
            func_00240C30();
            state += 1;
        }
        break;
    case 1:
        if (func_0017F900() == 1) {
            state += 1;
        case 2:
            func_00900A10();
            firstPair.x = D_003B2660[0];
            firstPair.y = D_003B2664[0];
            if (func_001DA380(2) != 1) {
                func_001DA550(2, &firstPair.x);
            }
            if (func_001DA380(1) != 1) {
                func_001DA550(1, &firstPair.x);
            }
            func_0020B660(1);
            state += 1;
        case 3:
            if (func_009005A0() == 1) {
                state += 1;
            case 4:
                if (func_0017F900() == 1) {
                    state += 1;
                case 5:
                    D_005E5E04[0] = func_009009D0();
                    func_001E7140(D_005E5E08[0]);
                    func_001F0210(D_005E5E0C[0]);
                    state += 1;
                default:
                    done = 1;
                }
            }
        }
        break;
    }
    D_005E5E00[0] = state;
    return done;
}
