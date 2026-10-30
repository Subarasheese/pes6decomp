/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B91000(s32, s32);
extern s32 func_002E8CB0(s32, s8);
extern s32 func_002E8C60(void);
extern s32 func_00B91150(void);
extern s32 func_00B91100(void);
extern s32 func_00B911B0(void);
extern s32 func_00B90CB0(void);
extern s32 func_00B90BA0(void);
extern void * func_00B9C490(void);
extern void func_002E92D0(int);
extern void func_002E8BA0(void);
extern void func_00B90FB0(s32, s32);
extern void func_00B90E70(u8);
M2C_UNK func_00B90D50();                            /* extern */
M2C_UNK func_00B9D8E0(s32);                         /* extern */
M2C_UNK func_00BC3F80();                            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
extern char D_00CE40C8[];
extern char D_00CE40CC[];
extern char D_00CE40D0[];

s32 func_00B9D680(void) {
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_00B9C490();
    var_s0 = 0;
    switch ((*(s32 *)D_00CE40C8)) {                           /* irregular */
    default:
        if (M2C_FIELD(temp_v0, u8 *, 0x38) == 0) {
            var_s0 = 1;
        } else if (func_00B911B0() != 0) {
            func_00B90D50();
            func_00B91000(0xF30039, 0);
            func_00B91000(0xF3003A, 1);
            func_00B90FB0(0x6C0006, 0);
            func_00B90FB0(0x6C0007, 1);
            (*(s32 *)D_00CE40CC) = 1;
            func_00B90E70(1U);
            (*(s32 *)D_00CE40C8) = 0x10;
        case 0x10:
            func_00B91150();
            (*(s32 *)D_00CE40C8) = 0x11;
        }
        break;
    case 0x11:
        if (func_00B90CB0() == 1) {
            func_00BC3FB0(3);
            (*(s32 *)D_00CE40C8) = 0x12;
        }
        break;
    case 0x12:
        func_00B9D8E0((*(s32 *)D_00CE40C8));
        break;
    case 0x20:
        func_002E8BA0();
        if (func_002E8C60() != 0) {
            func_00BC3F80();
            func_00B91100();
            (*(s32 *)D_00CE40C8) = 0x21;
        }
        break;
    case 0x21:
        if (func_00B90BA0() == 1) {
            func_002E92D0(1);
            func_002E8CB0(0x2E, 0);
            (*(s32 *)D_00CE40C8) = 0x22;
        }
        break;
    case 0x22:
        if (func_002E8C60() == 1) {
            (*(s32 *)D_00CE40C8) = 0x40;
        }
        break;
    case 0x40:
        func_00B91100();
        (*(s32 *)D_00CE40C8) = 0x41;
        break;
    case 0x41:
        if (func_00B90BA0() != 0) {
        case 0x42:
            var_s0 = (*(s32 *)D_00CE40D0);
            (*(s32 *)D_00CE40C8) = 0;
        }
        break;
    }
    return var_s0;
}
