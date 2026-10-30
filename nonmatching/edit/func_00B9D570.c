/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B90E70(M2C_UNK);                     /* extern */
s32 func_00BCF3C0(M2C_UNK);                         /* extern */
extern char D_00CE40B0[];
extern char D_00CE40B4[];
extern char D_00CE40B8[];
extern char D_00CE40BC[];
extern char D_00CE40C0[];

void func_00B9D570(void) {
    if (func_00BCF3C0(0x1000) == 0) {
        if (func_00BCF3C0(0x4000) == 0) {
            if (func_00BCF3C0(4) == 0) {
                if (func_00BCF3C0(0x20) != 0) {
                    func_0026E840(0x8400F802);
                    (*(s32 *)D_00CE40B4) = 1;
                    func_00B90E70(1);
                }
                return;
            }
            func_0026E840(0x8400F802);
            (*(s32 *)D_00CE40B4) = 0;
            func_00B90E70(0);
            return;
        }
        func_0026E840(0x84008401);
        (*(s32 *)D_00CE40B8) = 2;
        (*(s32 *)D_00CE40B0) = (*(s32 *)D_00CE40C0);
        return;
    }
    func_0026E840(0x84028400);
    if ((*(s32 *)D_00CE40B4) == 1) {
        (*(s32 *)D_00CE40B8) = 2;
        (*(s32 *)D_00CE40B0) = (*(s32 *)D_00CE40C0);
        return;
    }
    (*(s32 *)D_00CE40B0) = (*(s32 *)D_00CE40BC);
}
