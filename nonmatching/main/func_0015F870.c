/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017A0A0(void);
extern void func_0015F9E8(void);
M2C_UNK func_001051A0();                            /* extern */
extern char D_0037B974[];
extern char D_0037B988[];
extern char D_0037B9B8[];
extern char D_0037BA38[];

void func_0015F870(void) {
    s32 temp_v0;

    if ((*(s64 *)D_0037BA38) == 0) {
        do {
            (*(s64 *)D_0037B9B8) += 1;
            (*(s32 *)D_0037B988) = 1;
            temp_v0 = func_0017A0A0();
            (*(s32 *)D_0037B988) = 0;
            if ((*(s32 *)D_0037B974) == 1) {
                (*(s32 *)D_0037B974) = 0;
                func_0015F9E8();
            }
            if (temp_v0 == 0) {
                func_0015F9E8();
            }
        } while ((*(s64 *)D_0037BA38) == 0);
    }
    *(s64 *)0x37BA40 = 1;
    func_001051A0();
}
