/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017A010(void);
extern void func_0015F9E8(void);
M2C_UNK func_001051A0();                            /* extern */
extern char D_0037B97C[];
extern char D_0037B998[];
extern char D_0037B9F8[];

void func_0015F4A8(void) {
    if ((*(s64 *)D_0037B9F8) == 0) {
        do {
            (*(s64 *)D_0037B998) += 1;
            (*(s32 *)D_0037B97C) = 1;
            func_0017A010();
            (*(s32 *)D_0037B97C) = 0;
            func_0015F9E8();
        } while ((*(s64 *)D_0037B9F8) == 0);
    }
    *(s64 *)0x37BA00 = 1;
    func_001051A0();
}
