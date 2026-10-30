/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
extern void func_001B6860(void);
extern s32 func_00BA25B0(void *);
extern void func_00213920(s32, s32, s32, void *, s32);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002135D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002136B0(s32, s32);                    /* extern */
M2C_UNK func_00214290(s32);                         /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
s32 func_00BA3A00();                                /* extern */
s32 func_00BAEBC0(M2C_UNK);                         /* extern */
s32 func_00BAFDE0(M2C_UNK);                         /* extern */
M2C_UNK func_00BB14F0();                            /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
extern char D_00CB5B88[];
extern char D_00CE4150[];
extern char D_00CE4155[];

u8 func_00BA2400(void) {
    s32 temp_v0;
    s32 var_v0;
    u8 var_s1;

    var_s1 = 0;
    switch ((*(u8 *)D_00CE4155)) {                           /* irregular */
    case 2:
        if (M2C_FIELD(((void *)D_00CE4150), s32 *, 0) == 0) {
            var_v0 = func_00BAFDE0(0);
        } else {
            var_v0 = func_00BAEBC0(3);
        }
        if (var_v0 != 0) {
            M2C_FIELD(((void *)D_00CE4150), s8 *, 5) = 0;
        }
        break;
    case 1:
        if (func_00BA25B0(((void *)D_00CE4150)) != 0) {
            func_00214290(M2C_FIELD(((void *)D_00CE4150), s32 *, 8));
        }
        break;
    case 0:
        func_00B91440(3);
        func_001B6860();
        func_00BB14F0();
        temp_v0 = func_00214540(0);
        M2C_FIELD(((void *)D_00CE4150), s32 *, 8) = temp_v0;
        func_00213920(temp_v0, 0x200024, 0x4E90, ((void *)D_00CB5B88), 2);
        func_002135D0(M2C_FIELD(((void *)D_00CE4150), s32 *, 8), 0x435C0000);
        func_002136B0(M2C_FIELD(((void *)D_00CE4150), s32 *, 8), M2C_FIELD(((void *)D_00CE4150), s32 *, 0));
        M2C_FIELD(((void *)D_00CE4150), u8 *, 6) = 0U;
        if (M2C_FIELD(((void *)D_00CE4150), s32 *, 0) == 0) {
            func_001B66C0(0xF00097);
        } else if (M2C_FIELD(((void *)D_00CE4150), s32 *, 0) == 1) {
            func_001B66C0(0xF0009B);
        } else {
            func_001B6670();
        }
        M2C_FIELD(((void *)D_00CE4150), s8 *, 5) = 1;
        if (func_00BA3A00() == 0) {
            func_00BC6910(0x200024);
        }
        break;
    case 3:
        var_s1 = M2C_FIELD(((void *)D_00CE4150), u8 *, 6);
        func_001C48E8(((void *)D_00CE4150), 0, 0xC);
        func_001B6670();
        break;
    }
    return var_s1;
}
