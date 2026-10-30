/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7A0(void);
extern int func_002DCA50(void);
extern s32 func_001FC7D0(void);
extern s32 func_001FC800(void);
M2C_UNK func_002B2270(s64, void *);                 /* extern */
void *func_008472D0();                              /* extern */
M2C_UNK func_00859A80(s64, u16, M2C_UNK, void *, M2C_UNK); /* extern */
extern char D_008B142D[];

s32 func_0085D7C0(s64 arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = func_008472D0();
    if (func_002DCA50() == 0) {
        func_001FC800();
        if (func_001FC7D0() != 0x11) {
            return -1;
        }
        func_001FC800();
        if (func_001FC7A0() != 0) {
            func_00859A80((s64) (arg0 << 0x30) >> 0x30, M2C_FIELD(arg1, u16 *, 0), 0xC8, arg1, 0x138);
            if ((*(s8 *)D_008B142D) == 0) {
                if ((u32) M2C_FIELD(arg1, u32 *, 4) >= (u32) M2C_FIELD(temp_s0, u32 *, 0x24)) {
                    func_002B2270(arg0, arg1);
                    M2C_FIELD(temp_s0, u32 *, 0x24) = (u32) M2C_FIELD(arg1, u32 *, 4);
                    return 0;
                }
                return -1;
            }
            return -1;
        }
        return -1;
    }
    return -1;
}
