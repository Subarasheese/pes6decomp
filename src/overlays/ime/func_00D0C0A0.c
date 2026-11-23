/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern void func_001B7B80(s32);
extern s32 func_001F08B0(s32);
extern void func_001B77F0(s32);
extern void func_001B7BC0(s32 slot, s32 label);
extern s8 D_00D37772[];
extern s8 D_00D37773[];
extern s8 D_00D37775[];
extern s8 D_00D37776[];
extern s32 D_00D377A0[];
extern s32 D_00D377A4[];
extern s32 D_00D377D8[];

void func_00D0C0A0(s32 mode, s32 force) {
    s32 label10;
    s32 label11;

    if (D_00D37772[0] != 0) {
        D_00D37773[0] = mode;
        if (((mode & 0xFF) == 1) && (D_00D37775[0] == 1)) {
            label11 = func_001F08B0(0x01F60020);
            if ((force != 0) || (D_00D377A4[0] != label11)) {
                if (label11 == 0) {
                    if (D_00D377A4[0] != 0) {
                        D_00D377A4[0] = 0;
                        if (D_00D37776[0] == 0) {
                            func_001B7B80(0xB);
                        }
                    }
                } else {
                    D_00D377A4[0] = label11;
                    if (D_00D37776[0] == 0) {
                        func_001B7BC0(0xB, label11);
                        func_001B77F0(D_00D377D8[0]);
                    }
                }
            }
            label10 = func_001F08B0(0x01F6001F);
            if ((force != 0) || (D_00D377A0[0] != label10)) {
                if (label10 == 0) {
                    if (D_00D377A0[0] != 0) {
                        D_00D377A0[0] = 0;
                        if (D_00D37776[0] == 0) {
                            func_001B7B80(0xA);
                        }
                    }
                } else {
                    D_00D377A0[0] = label10;
                    if (D_00D37776[0] == 0) {
                        func_001B7BC0(0xA, label10);
                        func_001B77F0(D_00D377D8[0]);
                    }
                }
            }
        } else {
            if (D_00D377A4[0] != 0) {
                D_00D377A4[0] = 0;
                if (D_00D37776[0] == 0) {
                    func_001B7B80(0xB);
                }
            }
            if (D_00D377A0[0] != 0) {
                D_00D377A0[0] = 0;
                if (D_00D37776[0] == 0) {
                    func_001B7B80(0xA);
                }
            }
        }
    }
}
