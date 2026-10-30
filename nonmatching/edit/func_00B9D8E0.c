/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B90E70(u8);                          /* extern */
s32 func_00BCF3C0(M2C_UNK);                         /* extern */
extern char D_00CE40C8[];
extern char D_00CE40CC[];
extern char D_00CE40D0[];

void func_00B9D8E0(void) {
    if (func_00BCF3C0(0x1000) == 0) {
        if (func_00BCF3C0(0x4000) == 0) {
            if (func_00BCF3C0(1) == 0) {
                if ((func_00BCF3C0(8) != 0) && ((*(s32 *)D_00CE40CC) <= 0)) {
                    (*(s32 *)D_00CE40CC) += 1;
                    func_0026E840(0x8400F802);
                    func_00B90E70((u8) (*(s32 *)D_00CE40CC));
                }
            } else if ((*(s32 *)D_00CE40CC) > 0) {
                (*(s32 *)D_00CE40CC) -= 1;
                func_0026E840(0x8400F802);
                func_00B90E70((u8) (*(s32 *)D_00CE40CC));
            }
        } else {
            func_0026E840(0x84008401);
            (*(s32 *)D_00CE40D0) = 2;
            (*(s32 *)D_00CE40C8) = 0x40;
        }
    } else {
        func_0026E840(0x84028400);
        if ((*(s32 *)D_00CE40CC) != 0) {
            (*(s32 *)D_00CE40D0) = 1;
            (*(s32 *)D_00CE40C8) = 0x40;
            return;
        }
        (*(s32 *)D_00CE40D0) = 1;
        (*(s32 *)D_00CE40C8) = 0x20;
    }
}
