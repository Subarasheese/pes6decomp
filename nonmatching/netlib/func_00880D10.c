/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154490(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_001D76B0(s32, s32);                    /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_0020E310(M2C_UNK, s32 *);              /* extern */
s32 func_00825610();                                /* extern */
M2C_UNK func_00841BE0(s8 *, s64, s64, s32);         /* extern */
s64 func_00842870();                                /* extern */
M2C_UNK func_008504E0(M2C_UNK);                     /* extern */
s8 *func_00881720();                                /* extern */
s32 func_00881A20();                                /* extern */
M2C_UNK func_00881F40();                            /* extern */
M2C_UNK func_00D0BC80(M2C_UNK);                     /* extern */
M2C_UNK func_00D0F4C0();                            /* extern */
s32 func_00D0F5E0();                                /* extern */
extern u8 D_003E7828;
extern u16 D_003EA39C;
extern char D_008B2484[];
extern char D_008B2488[];
extern char D_008B2494[];
extern char D_008B24D0[];
extern char D_008B24D2[];
extern char D_008B24D4[];

s32 func_00880D10(void) {
    s32 sp4C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_v0;
    s64 temp_v1;
    s64 var_s1;
    s64 var_s2;
    s8 *temp_v0_3;
    u16 var_v0_2;
    u32 var_v0_3;

    switch ((*(u8 *)D_008B24D2)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        if (func_00881A20() != 0) {
            func_001D7C20((*(s32 *)D_008B2484), 2);
            func_001D7C20((*(s32 *)D_008B2488), 2);
            (*(u8 *)D_008B24D2) += 1;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00D0F5E0();
        if (((*(s8 *)D_008B24D4) != 0) && (temp_v0 == 0)) {
            temp_v0_2 = func_00154490(0, 0x200);
            if ((*(u8 *)D_008B24D0) != 0) {
                temp_v0_3 = func_00881720();
                if (temp_v0_3 != NULL) {
                    if (*temp_v0_3 != 0) {
                        temp_v1 = (s64) (func_00842870() << 0x38) >> 0x38;
                        sp4C = 0;
                        switch (temp_v1) {          /* switch 2; irregular */
                        case 2:                     /* switch 2 */
                            var_s2 = 1;
                            var_s1 = 7;
                            func_00D0BC80(8);
                            func_00D0F4C0();
                            break;
                        case 0:                     /* switch 2 */
                            var_s2 = (s64) (1 << 0x38) >> 0x38;
                            var_s1 = 9;
                            func_00D0BC80(5);
                            func_00D0F4C0();
                            break;
                        case 1:                     /* switch 2 */
                            if (func_00825610() != 5) {
                                var_s2 = 1;
                                var_s1 = (s64) (5 << 0x38) >> 0x38;
                            } else {
                                var_s2 = 1;
                                var_s1 = 0xA;
                            }
                            func_00D0BC80(6);
                            func_00D0F4C0();
                            break;
                        default:                    /* switch 2 */
                        case 4:                     /* switch 2 */
                        case 3:                     /* switch 2 */
                            var_s2 = 2;
                            var_s1 = 0xC;
                            break;
                        }
                        func_0020E310(0, &sp4C);
                        func_00841BE0(temp_v0_3, var_s2, var_s1, sp4C);
                    }
                    (*(u8 *)D_008B24D0) = 0;
                    func_001D7D60((*(s32 *)D_008B2494), 1);
                    (*(u8 *)D_008B24D2) = 1;
                    func_008504E0(0);
                }
            } else if (temp_v0_2 != 0) {
                (*(u8 *)D_008B24D0) = 1;
                func_001D7D60((*(s32 *)D_008B2494), 0);
                (*(u8 *)D_008B24D2) = 1;
            }
            if ((*(u8 *)D_008B24D0) == 0) {
                if (D_003EA39C != 0) {
                    if (D_003EA39C != 0x1FF) {
                        if ((s32) D_003EA39C >= 0x100) {
                            temp_v1_2 = 0x200 - D_003EA39C;
                            var_v0 = temp_v1_2 >> 1;
                            if (temp_v1_2 < 0) {
                                var_v0 = (s32) (temp_v1_2 + 1) >> 1;
                            }
                            var_v0_2 = D_003EA39C + (var_v0 & 0xFFFF);
                        } else {
                            var_v0_2 = D_003EA39C * 2;
                        }
                        goto block_54;
                    }
                    var_v0_2 = 0;
                    D_003EA39C = 0;
                    D_003E7828 ^= 1;
                } else {
                    var_v0_2 = 1;
block_54:
                    D_003EA39C = var_v0_2;
                }
                if (D_003E7828 == 0) {
                    var_v0_3 = 0xFF - ((u32) (var_v0_2 & 0xFFFF) >> 1);
                } else {
                    var_v0_3 = (u32) (var_v0_2 & 0xFFFF) >> 1;
                }
                func_001D76B0((*(s32 *)D_008B2494), var_v0_3 & 0xFF);
            }
        }
        func_00881F40();
        break;
    case 3:                                         /* switch 1 */
        (*(u8 *)D_008B24D2) = 0;
        func_001D7C20((*(s32 *)D_008B2484), 0);
        func_001D7C20((*(s32 *)D_008B2488), 0);
        func_001D7D60((*(s32 *)D_008B2484), 0);
        func_001D7D60((*(s32 *)D_008B2488), 0);
        break;
    }
    return 0;
}
