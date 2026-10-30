/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B80(s32);
extern s32 func_001F08B0(s32);
extern void func_001B77F0(s32);
M2C_UNK func_001B7BC0(M2C_UNK, s32);                /* extern */
extern char D_00D37772[];
extern char D_00D37773[];
extern char D_00D37775[];
extern char D_00D37776[];
extern char D_00D377A0[];
extern char D_00D377A4[];
extern char D_00D377D8[];

void func_00D0C0A0(s8 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;

    if ((*(s8 *)D_00D37772) != 0) {
        (*(s8 *)D_00D37773) = arg0;
        if (((arg0 & 0xFF) == 1) && ((*(s8 *)D_00D37775) == 1)) {
            temp_v0 = func_001F08B0(0x01F60020);
            if ((arg1 != 0) || ((*(s32 *)D_00D377A4) != temp_v0)) {
                if (temp_v0 == 0) {
                    if ((*(s32 *)D_00D377A4) != 0) {
                        (*(s32 *)D_00D377A4) = 0;
                        if ((*(s8 *)D_00D37776) == 0) {
                            func_001B7B80(0xB);
                        }
                    }
                } else {
                    (*(s32 *)D_00D377A4) = temp_v0;
                    if ((*(s8 *)D_00D37776) == 0) {
                        func_001B7BC0(0xB, temp_v0);
                        func_001B77F0((*(s32 *)D_00D377D8));
                    }
                }
            }
            temp_a1 = func_001F08B0(0x01F6001F);
            if ((arg1 != 0) || ((*(s32 *)D_00D377A0) != temp_a1)) {
                if (temp_a1 == 0) {
                    if ((*(s32 *)D_00D377A0) != 0) {
                        (*(s32 *)D_00D377A0) = 0;
                        if ((*(s8 *)D_00D37776) == 0) {
                            func_001B7B80(0xA);
                        }
                    }
                } else {
                    (*(s32 *)D_00D377A0) = temp_a1;
                    if ((*(s8 *)D_00D37776) == 0) {
                        func_001B7BC0(0xA, temp_a1);
                        func_001B77F0((*(s32 *)D_00D377D8));
                    }
                }
            }
        } else {
            if ((*(s32 *)D_00D377A4) != 0) {
                (*(s32 *)D_00D377A4) = 0;
                if ((*(s8 *)D_00D37776) == 0) {
                    func_001B7B80(0xB);
                }
            }
            if ((*(s32 *)D_00D377A0) != 0) {
                (*(s32 *)D_00D377A0) = 0;
                if ((*(s8 *)D_00D37776) == 0) {
                    func_001B7B80(0xA);
                }
            }
        }
    }
}
