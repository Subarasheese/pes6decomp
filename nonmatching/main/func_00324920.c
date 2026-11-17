/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00309420();
extern s32 func_002305D0();
extern s32 func_0022FF20();
extern s32 func_002308F0();
extern s32 func_002259E0();
extern s32 func_00292B10();
extern s32 func_00292AA0();
extern s32 func_00366290(s32 a);
extern char D_00591C09[];

s32 func_00324920(s32 *arg0) {
    s32 s0;
    s32 t;
    if (func_00309420() != 0) {
        s0 = 1;
    } else {
        t = func_002305D0() & 0xFF;
        if (t == 0xFF) {
            u8 m = *(u8 *)D_00591C09;
            if (m == 5) s0 = 3;
            else if (m == 7) s0 = 0x12;
            else if (func_00366290(m) == 0) s0 = 1;
            else if (func_00292AA0() == 0) s0 = 0x10;
            else s0 = 0x11;
        } else if (t == 3) {
            s0 = 0xE;
        } else if (t == 1) {
            if (func_00292B10() == 0) {
                s0 = 0xC;
            } else {
                t = func_002308F0() & 0xFF;
                if (t == 0x37 || t == 0x35 || t == 0x31 || t == 0x30 || t == 0x2B || t == 0x2A) {
                    if (func_00292AA0() == 0) s0 = 4; else s0 = 5;
                } else {
                    if (func_00292AA0() == 0) s0 = 0xA; else s0 = 0xB;
                }
            }
        } else if (t == 0 || t == 5) {
            if (func_0022FF20() != 0) {
                s0 = 2;
            } else {
                t = func_002308F0() & 0xFF;
                if (t == 0xD || t == 0xB) {
                    if ((func_002259E0() & 0xFF) != 1) s0 = 0xE; else s0 = 6;
                } else if (t == 0x2E) {
                    s0 = 1;
                } else {
                    s0 = 6;
                }
            }
        } else if (t == 2) {
            s0 = 7;
        }
    }
    *arg0 = s0;
    return 1;
}
