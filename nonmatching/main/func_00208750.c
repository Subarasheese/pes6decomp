/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00207390(void *, s32);
void func_00208970(void *, s32, s32, f32);
extern char *D_003E74CC;

void func_00208750(char *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    u16 id;
    u32 tbl;
    char *p;
    s32 lo;
    s32 hi;
    s32 diff;
    s32 half;
    f32 f;

    var_s0 = *(u16 *)(arg0 + 0x30) != (arg1 & 0xFFFF);
    if (*(u8 *)(arg0 + 0x2D) != (arg2 & 0xFF)) {
        *(u8 *)(arg0 + 0x2D) = arg2;
        var_s0 = 1;
        func_00208970(arg0, arg1, arg2, *(f32 *)(arg0 + 0x38));
        id = *(u16 *)(arg0 + 0x30);
        tbl = *(u8 *)(D_003E74CC + id * 4 + 0x2FD8);
        if (id != 0x38C && id != 0x393 && id != 0x2B8 && id != 0xBF && id != 0xB6 && id != 0x2C0) {
            f = *(f32 *)(arg0 + 0x38) + (f32) (tbl >> 1);
            *(f32 *)(arg0 + 0x38) = f;
            if (f <= (f32) tbl) {
                return;
            }
            *(f32 *)(arg0 + 0x38) = f - (f32) tbl;
            return;
        }
        p = *(char **)(arg0 + 4);
        f = *(f32 *)(arg0 + 0x38);
        lo = *(u8 *)(p + 1) * 2;
        if (f < (f32) lo) {
            return;
        }
        hi = *(u8 *)(p + 2) * 2;
        if (!(f <= (f32) hi)) {
            return;
        }
        diff = hi - lo;
        half = diff / 2;
        f = f + (f32) half;
        *(f32 *)(arg0 + 0x38) = f;
        if (!(f <= (f32) hi)) {
            *(f32 *)(arg0 + 0x38) = f - (f32) diff;
        }
    } else {
        func_00208970(arg0, arg1, arg2, *(f32 *)(arg0 + 0x38));
    }
    if (var_s0 != 0) {
        if (*(u16 *)(arg0 + 0x30) == 0xC7) {
            func_00207390(arg0, 6);
        }
    }
}
