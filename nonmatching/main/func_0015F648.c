/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017A058(void);
extern void func_0015F9E8(void);
M2C_UNK func_001051A0();                            /* extern */
extern char D_0037B980[];
extern char D_0037B9A8[];
extern char D_0037BA18[];
extern char D_0037BA54[];

void func_0015F648(void) {
    s64 *temp_s0;

    if ((*(s64 *)D_0037BA18) == 0) {
loop_2:
        (*(s64 *)D_0037B9A8) += 1;
        (*(s32 *)D_0037B980) = 1;
        if ((*(u16 *)D_0037BA54) != 0) {
            *(s64 *)0x120000E0 = (s64) (*(u16 *)D_0037BA54);
        }
        func_0017A058();
        if ((*(u16 *)D_0037BA54) != 0) {
            *(s64 *)0x120000E0 = 0;
        }
        (*(s32 *)D_0037B980) = 0;
        temp_s0 = ((void *)D_0037BA18) - 0x45E8;
        if (*temp_s0 == 0) {
            func_0015F9E8();
            if (*temp_s0 == 0) {
                goto loop_2;
            }
        }
    }
    *(s64 *)0x37BA20 = 1;
    func_001051A0();
}
