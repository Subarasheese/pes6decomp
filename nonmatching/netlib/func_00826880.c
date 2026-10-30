/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(void *, s8 *, M2C_UNK);       /* extern */
M2C_UNK func_00826010(s32, M2C_UNK);                /* extern */
s32 func_00826490(s8 *, M2C_UNK *);                 /* extern */
s32 func_0082B290();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00871C10(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_00D0BC80(M2C_UNK);                     /* extern */
s32 func_00D0BCF0();                                /* extern */
M2C_UNK func_00D0F4C0();                            /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];
extern char D_008AB3A4[];

s32 func_00826880(s32 arg0, s8 *arg1, s8 *arg2, s8 arg3, s8 arg4, s32 arg5, s32 arg6) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_0082B290();
    if ((temp_v0 != -0x96) && ((*(s32 *)D_008A4398) != 0) && ((*(s8 *)D_008A43B0) != 1) && (temp_v0 != -0x3E) && (temp_v0 != -0x49)) {
        func_00862110((*(s32 *)D_008A4398), arg0);
    }
    if ((*(s32 *)D_008A4398) == 0) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 >= 9) {
        return 2;
    }
    func_001C48E8(((void *)D_008AB3A4), 0, 0xBC);
    M2C_FIELD(((void *)D_008AB3A4), s32 *, 4) = arg6;
    M2C_FIELD(((void *)D_008AB3A4), s8 *, 0x39) = arg3;
    M2C_FIELD(((void *)D_008AB3A4), s8 *, 0x3A) = arg4;
    M2C_FIELD(((void *)D_008AB3A4), s32 *, 0) = arg5;
    if (arg1 != NULL) {
        func_001C8590(((void *)D_008AB3A4) + 8, arg1, 0x31);
        if (arg2 != NULL) {
            if (*arg2 != 0) {
                temp_v0_2 = func_00826490(arg2, ((void *)D_008AB3A4));
                switch (temp_v0_2) {                /* irregular */
                case 1:
                    func_00D0BC80(0);
                    func_00D0F4C0();
                    goto block_44;
                case 4:
                    func_00D0BC80(0);
                    func_00D0F4C0();
block_38:
                    if (func_00862110((*(s32 *)D_008A4398), arg0) != 1) {
                        return 1;
                    }
                    if (func_00871C10((*(s32 *)D_008A4398) + (arg0 * 0x24), ((void *)D_008AB3A4)) != 0) {
                        return 2;
                    }
                    goto block_44;
                case 0:
                    if (func_00D0BCF0() != 0) {
                        func_001C8590(((void *)D_008AB3A4) + 0x3B, arg2, 0x81);
                        goto block_38;
                    }
                    func_00826010(func_001F08B0(0x01FA0020), 0);
                    goto block_44;
                default:
                    func_00D0BC80(0);
                    func_00D0F4C0();
                    if (func_001F08B0(0x0200000A) != 0) {
                        func_00826010(func_001F08B0(0x0200000A), 0);
                        return 4;
                    }
                    goto block_44;
                }
            } else {
                goto block_44;
            }
        } else {
            goto block_44;
        }
    } else {
block_44:
        return 4;
    }
}
