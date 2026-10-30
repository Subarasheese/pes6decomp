/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BE0310(M2C_UNK *);                   /* extern */
M2C_UNK func_00BE04B0();                            /* extern */
extern char D_00CE59B0[];

s32 func_00BE01D0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(0x08000000) == 0) {
                if (func_00BCF3A0(0x8000) == 0) {
                    if (func_00BCF3A0(0x40000) == 0) {
                        if (func_00BCF3A0(0x489) != 0) {
                            func_00BE04B0();
                        }
                    } else {
                        M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) = (u8) ((s32) (M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) + 1) % (s32) M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD3));
                        func_00BE0310(((void *)D_00CE59B0));
                    }
                } else {
                    M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) = (u8) ((s32) ((M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) + M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD3)) - 1) % (s32) M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD3));
                    func_00BE0310(((void *)D_00CE59B0));
                }
            } else {
                var_s0 = 3;
                func_0026E840(0x84028400);
            }
        } else {
            var_s0 = 2;
            func_0026E840(0x84008401);
        }
    } else {
        var_s0 = 1;
        func_0026E840(0x84028400);
    }
    return var_s0;
}
