/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7A0(void);
extern int func_002DCA50(void);
extern s32 func_001FC7D0(void);
extern s32 func_001FC800(void);
M2C_UNK func_002B1360(s64, void *);                 /* extern */
void *func_008472D0();                              /* extern */
M2C_UNK func_008568F0(s64, void *);                 /* extern */
M2C_UNK func_00859A80(s64, u16, M2C_UNK, void *, M2C_UNK); /* extern */
extern char D_008B142D[];

s32 func_0085D320(s64 arg0, void *arg1) {
    u32 temp_v1;
    void *temp_s0;

    temp_s0 = func_008472D0();
    func_001FC800();
    if (func_001FC7D0() != 0x11) {
        return -1;
    }
    func_001FC800();
    if (func_001FC7A0() == 0) {
        return -1;
    }
    if (func_002DCA50() == 0) {
        func_00859A80((s64) (arg0 << 0x30) >> 0x30, M2C_FIELD(arg1, u16 *, 0), 0xC8, arg1, 0x13C);
        if ((*(s8 *)D_008B142D) == 0) {
            temp_v1 = M2C_FIELD(arg1, u32 *, 4);
            if (temp_v1 >= (u32) M2C_FIELD(temp_s0, u32 *, 0x24)) {
                M2C_FIELD(temp_s0, u32 *, 0x24) = temp_v1;
                func_002B1360(arg0, arg1);
                goto block_22;
            }
            return -1;
        }
        return -1;
    }
    if ((*(s8 *)D_008B142D) == 0) {
        func_008568F0(arg0, arg1);
block_22:
        return 0;
    }
    return -1;
}
