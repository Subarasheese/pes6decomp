/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_002D53A0();                                /* extern */
extern char D_003E60A0[];
extern char D_003E60A8[];
extern s32 D_005F4184;
extern s32 D_005F4188;
extern s32 D_005F418C;

void func_00342CD0(s32 arg0, s32 arg1) {
    void (*fn)(s32, s32);
    s32 idx;
    void (*fn1)(s32, void *);
    s32 var_s0;

    var_s0 = arg0;
    if ((var_s0 >= 0) && (var_s0 < 0xD)) {
        if ((var_s0 == 1) && (func_002D53A0() == 1)) {
            var_s0 = 0xC;
        }
        if (arg1 == 0) {
            if (D_005F4184 == var_s0) {
                idx = D_005F4184;
                fn = *(void (**)(s32, s32))(D_003E60A8 + idx * 0x14);
                if (fn != NULL) {
                    fn(idx * 0x14, idx);
                }
                D_005F4184 = 0;
                D_005F418C = 0;
            }
        } else if (arg1 == 1) {
            if (D_005F4184 != var_s0) {
                idx = D_005F4184;
                fn = *(void (**)(s32, s32))(D_003E60A8 + idx * 0x14);
                if (fn != NULL) {
                    fn(idx * 0x14, idx);
                }
                D_005F4184 = 0;
                D_005F4188 = var_s0;
                fn1 = *(void (**)(s32, void *))(D_003E60A0 + var_s0 * 0x14);
                if (fn1 != NULL) {
                    fn1(D_005F418C, fn1);
                }
                D_005F4184 = var_s0;
                D_005F4188 = 0;
                D_005F418C = 0;
            }
        }
    }
}
