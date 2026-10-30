/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364E0(void);
extern void func_00B364D0(u32);
M2C_UNK func_00B37240();                            /* extern */
M2C_UNK func_00B382F0(void *);                      /* extern */
M2C_UNK func_00B82670();                            /* extern */
M2C_UNK func_00B9E7C0();                            /* extern */
s32 func_00BBB8C0(M2C_UNK, void *);                 /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCB22[];

void func_00B9DB00(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_a1, s8 *, 0x50) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 0;
    (*(s8 *)D_00CBCAD1) = 0;
    (*(u8 *)D_00CBCB22) = 0;
    if ((func_00BBB8C0(0x87, temp_a1) % 3) != 0) {
        (*(u8 *)D_00CBCB22) |= 1;
    }
    func_00B37240();
    func_00B82670();
    func_00B364E0();
    func_00B364D0(3U);
    func_00B9E7C0();
    func_00B382F0(arg0);
    func_00BD4040(arg0, 2);
    func_00BD3BA0(arg0, 4, 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC1;
}
