/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00270DE0(u8);
s32 func_0026C760();                                /* extern */
M2C_UNK func_00309460(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char D_0058D7A8[];
extern char D_0058D7AA[];
extern char D_0058D800[];
extern char D_00591DCD[];
extern char D_00591DD5[];
extern char D_00591F2D[];

void func_0026C580(void) {
    if (func_0026C760() == 0) {
        if ((*(s32 *)D_0058D800) == 0) {
            if (func_00C01090(0x21) == 0) {
                if (func_00C01090(0x23) == 0) {
                    if (func_00C01090(0x24) == 0) {
                        if (func_00C01090(0x26) == 0) {
                            if (func_00C01090(0x28) != 0) {
                                func_00270DE0(4U);
                                func_009E1D30(1, 5);
                                if (func_002DCA30() != 0) {
                                    func_00855290(4, func_009E1C90(1) & 0xFF, 1);
                                }
                            }
                        } else {
                            func_00270DE0(((*(u8 *)D_00591DCD) + 1) & 0xFF);
                            func_009E1D30(0, 2);
                        }
                    } else {
                        (*(s8 *)D_00591F2D) = 0;
                        func_00270DE0(4U);
                        func_009E1D30(1, 5);
                        if (func_002DCA30() != 0) {
                            func_00855290(4, func_009E1C90(1) & 0xFF, 1);
                        }
                    }
                } else {
                    func_00270DE0(((*(u8 *)D_00591DCD) + 1) & 0xFF);
                    func_009E1D30(0, 2);
                }
            } else {
                func_00270DE0(((*(u8 *)D_00591DCD) + 1) & 0xFF);
                func_009E1D30(0, 2);
            }
        } else {
            goto block_4;
        }
    } else {
block_4:
        if ((*(s8 *)D_0058D7AA) != 0) {
            if ((*(s8 *)D_0058D7A8) == 0) {
                func_00309460(0, 9);
                func_009E1D30(1, 0);
            }
            (*(s32 *)D_0058D800) = 0;
        }
        (*(s8 *)D_00591DD5) = 1;
    }
}
