/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BE4D0(s32);
extern void func_001FC780(void);
extern u8 func_0022F8D0(void);
extern s32 func_0023F330(void);
extern s32 func_00240C80(void);
extern s32 func_001E6C50(void *);
extern s32 func_002DEE20(s32, s32, s32);
extern s32 func_0017F900(void);
extern void func_001FC840(void);
extern void func_0023FC70(void);
extern void func_0023FCA0(int);
extern void * func_001E6E10(s32);
extern void func_001DA4B0(s32);
extern void func_0022F1C0(void);
extern s32 func_001B8DC0(void);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_00225C00(s32, s32);                    /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
s32 func_00240EC0(s32, M2C_UNK);                    /* extern */
s32 func_0024A380(s16, M2C_UNK);                    /* extern */
M2C_UNK func_002CB9B0(M2C_UNK);                     /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
M2C_UNK func_008B36F0();                            /* extern */
s32 func_008C36D0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00C012F0(s32, M2C_UNK);                    /* extern */
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern s32 D_003EA9D4;
extern char D_0053C304[];
extern char D_00591C09[];
extern char D_00591F2C[];

void func_009313D0(void) {
    s16 var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    switch ((*(s16 *)D_0053C304)) {                           /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        switch (D_003EA9D4) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            (*(s8 *)D_00591C09) = 0xC;
            func_002DEE20(func_0023F330(), 0x7405, 0xC);
            D_003EA9D4 += 1;
            return;
        case 1:                                     /* switch 4 */
            if (func_00240C80() == 1) {
                func_002CBA60(0x17);
                func_001FC780();
                func_001FC840();
                D_003EA9D4 += 1;
                return;
            }
            return;
        case 2:                                     /* switch 4 */
            if (func_0017F900() != 0) {
                (*(s8 *)D_00591C09) = 4;
                D_003EA9D4 = D_003EA9D4;
                return;
            }
            break;
        case 3:                                     /* switch 4 */
            temp_v0 = func_00C012F0(D_003EA9D4, 3);
            if (temp_v0 != 0) {
                func_001E6C50(func_001E6E10(0x7405));
                func_001FC780();
                func_001D5C40(0x1003C);
                if (temp_v0 != 1) {
                    D_003EA9D4 = 4;
                } else {
                    (*(s16 *)D_0053C304) = 0;
                    D_003EA9D4 = 0;
                    func_0023FCA0(3);
                    func_001DA4B0(1);
                    func_001DA4B0(2);
                }
                func_002CB9B0(0x17);
                return;
            }
            break;
        case 4:                                     /* switch 4 */
            if (func_00240EC0(D_003EA9D4, 3) == 1) {
                func_0023F510(3);
                if (func_001BE4D0(0) == 1) {
                    func_008B36F0();
                    var_a0 = 2;
                    D_003EA9D4 = 0;
block_51:
                    (*(s16 *)D_0053C304) = var_a0;
                }
            }
            break;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_008C36D0(0, 3);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_0023F510(2);
            var_a0 = (*(s16 *)D_0053C304) - 1;
            goto block_51;
        case 2:                                     /* switch 3 */
            func_001B8DC0();
            if ((func_0022F8D0() & 0xFF) == 2) {
                var_a0 = (*(s16 *)D_0053C304) + 1;
                goto block_51;
            }
            (*(s16 *)D_0053C304) = 0;
            func_0023FCA0(3);
            return;
        }
        break;
    case 0:                                         /* switch 1 */
        (*(s16 *)D_0053C304) += 1;
        func_0022F1C0();
        var_s0 = 0;
        do {
            func_00225C00((var_s0 + 0x40) & 0xFFFF, var_s0 & 0xFF);
            var_s0 += 1;
        } while (var_s0 < 0x8C);
        (*(s8 *)D_003AA235) = 0;
        (*(s8 *)D_003AA269) = 0;
        (*(s8 *)D_003AA29D) = 0;
        (*(s8 *)D_003AA2D1) = 0;
        (*(s8 *)D_003AA305) = 0;
        (*(s8 *)D_003AA339) = 0;
        (*(s8 *)D_003AA36D) = 0;
        (*(s8 *)D_003AA201) = -1;
        (*(s8 *)D_00591F2C) = 1;
        return;
    case 1:                                         /* switch 1 */
        temp_v0_3 = func_0024A380((*(s16 *)D_0053C304), 3);
        switch (temp_v0_3) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            (*(s16 *)D_0053C304) += 1;
            func_0023F510(3);
            return;
        case 1:                                     /* switch 2 */
            (*(s16 *)D_0053C304) = 0;
            func_0023FC70();
            return;
        }
        break;
    }
}
