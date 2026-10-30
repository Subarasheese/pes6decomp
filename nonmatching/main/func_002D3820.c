/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00263070(void);
extern void func_001B77F0(s32);
extern void func_001B7A60(s32);
extern void func_001B78A0(void);
extern void func_001B7A90(void);
M2C_UNK func_001B7ED0(s32 *, s32, s32);             /* extern */
s32 func_00B263A0();                                /* extern */
extern char D_003B20B4[];
extern char D_003B20B8[];
extern char D_003B20BC[];
extern char D_00591C09[];

void func_002D3820(s32 arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;

    var_v0 = 0x20;
    var_v1 = &sp20;
    var_s0 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if ((arg0 & 0xFF) == 1) {
        if ((*(u8 *)D_00591C09) == 0xA) {
            var_a2 = -1;
        } else if (func_00263070() == 0) {
            var_a2 = *(s32 *)0x3B20B0;
        } else {
            var_a2 = -1;
        }
        sp20 = 5;
        sp28 = 0xE;
        sp30 = 0xD;
        sp24 = (*(s32 *)D_003B20B4);
        sp2C = (*(s32 *)D_003B20B8);
        sp34 = (*(s32 *)D_003B20BC);
        if (var_a2 != -1) {
            sp3C = var_a2;
            sp38 = 0xB;
        }
        var_a0 = 0;
        var_v1_2 = &sp20;
        do {
            if (M2C_FIELD(var_v1_2, s32 *, 4) != 0) {
                var_s0 += 1;
            }
            var_a0 += 1;
            var_v1_2 += 8;
        } while (var_a0 < 4);
        func_001B7ED0(&sp20, var_s0, var_a2);
        func_001B78A0();
        func_001B77F0(3);
        if (func_00B263A0() != 1) {
            func_001B7A60(0);
            func_001B77F0(3);
            return;
        }
        func_001B7A60(1);
        func_001B77F0(3);
        return;
    }
    func_001B7A90();
    func_001B78A0();
}
