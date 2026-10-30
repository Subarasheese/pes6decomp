/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002A87C0(void);
extern void Pes6Ball_Update(void);
extern int func_002DCA30(void);
extern s32 func_00152130(s32, s8);
extern int func_0029AC20(void);
M2C_UNK func_002561A0(M2C_UNK);                     /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_008481D0();                                /* extern */
s32 func_0084CD20(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_0084CDD0(M2C_UNK, s16, M2C_UNK *);     /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0093F720();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009E3090(M2C_UNK);                     /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00B24970(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00B76710();                            /* extern */
extern u8 D_003EA758;
extern char D_00591DB4[];
extern char D_00591E14[];
extern char D_008B14CC[];
extern char D_008B14D0[];
extern char D_008B14DC[];
extern char D_008B14E2[];
extern char D_00CBBDF4[];
extern char D_00CBBE00[];

void func_009E4A50(void) {
    if ((func_002DCA30() == 0) || (func_008481D0() == 0)) {
        func_00AD0A20();
        Pes6Ball_Update();
    }
    func_0093F720();
    if (func_00152130(0, 0x10) != 0) {
        if (func_002A87C0() == 0) {
            (*(s8 *)D_00591DB4) = 1;
        } else {
            (*(s8 *)D_00591DB4) = 0;
        }
        if (D_003EA758 == 0) {
            func_002561A0(5);
            D_003EA758 = 1;
        }
        if (func_002DCA30() != 0) {
            func_0084CDD0(1, *func_008472D0(), ((void *)D_008B14E2));
            func_008472D0();
            if (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3E) >> 0x3F) != 0) {
                if (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3C) >> 0x3F) == 0) {
                    if ((((*(s32 *)D_008B14DC) - (*(s32 *)D_008B14D0)) < 0x157C) && (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3A) >> 0x3F) == 0)) {
                        func_00853B50(1, 0xC, 1, 0, *func_008472D0(), 0, 0, 0);
                    }
                    if ((*(u8 *)D_00CBBDF4) != 0) {
                        func_00853B50(1, 9, 0, 0, *func_008472D0(), 0, 0, 0);
                    }
                } else {
                    func_00853B50(1, 0xC, 2, 0, *func_008472D0(), 0, 0, 0);
                }
            }
            if ((((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3E) >> 0x3F) == 0) && (func_0084CD20(-1, ((void *)D_008B14E2)) != 0)) {
                func_00853B50(1, 8, 5, 0, *func_008472D0(), 0, 0, 0);
            }
        }
        func_00B76710();
        if (func_0029AC20() == 0) {
            if ((*(u8 *)D_00CBBE00) == 0xFF) {
                func_009E3090(0xFF);
            }
            if ((*(u8 *)D_00CBBE00) != 0xFF) {
                func_00B24970((*(u8 *)D_00CBBE00), 0xFF);
                (*(s32 *)D_00591E14) = 0;
                D_003EA758 = 0;
                func_009E1D30(2, 9);
            }
        }
    }
}
