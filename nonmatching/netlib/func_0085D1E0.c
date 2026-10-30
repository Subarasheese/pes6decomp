/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_00146C70(M2C_UNK *);                   /* extern */
M2C_UNK func_002B0C30(s64, void *);                 /* extern */
M2C_UNK func_002B0C50(s64, void *);                 /* extern */
void *func_008472D0();                              /* extern */
M2C_UNK func_00859A80(s64, u16, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_00889560[];
extern char D_008B142D[];

s32 func_0085D1E0(s64 arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = func_008472D0();
    if ((func_009E1C90(1) & 0xFF) == 5) {
        if ((*(s8 *)D_008B142D) == 0) {
            func_00859A80((s64) (arg0 << 0x30) >> 0x30, M2C_FIELD(arg1, u16 *, 0), 0xC8, arg1, 0x168);
            M2C_FIELD(temp_s0, u32 *, 0x24) = (u32) M2C_FIELD(arg1, u32 *, 4);
            if (func_002DCA50() == 0) {
                if ((u32) M2C_FIELD(arg1, u32 *, 4) >= (u32) M2C_FIELD(temp_s0, u32 *, 0x24)) {
                    func_002B0C50(arg0, arg1);
                    goto block_14;
                }
                func_00146C70(((void *)D_00889560));
                return -1;
            }
            func_002B0C30(arg0, arg1);
            goto block_14;
        }
        return 0;
    }
block_14:
    return 0;
}
