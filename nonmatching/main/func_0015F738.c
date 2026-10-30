/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015F9E8(void);
extern int func_0017A088(void);
extern void func_00160E60(void);
extern int func_0015FEA0(void);
M2C_UNK func_001051A0();                            /* extern */
M2C_UNK func_0015F998(s32);                         /* extern */
s32 func_0015FA00(s32);                             /* extern */
extern char D_0037B974[];
extern char D_0037B984[];
extern char D_0037B9B0[];
extern char D_0037BA28[];
extern char D_0037BA58[];

void func_0015F738(void) {
    s32 temp_v0;

    if ((*(s64 *)D_0037BA28) == 0) {
        do {
            (*(s64 *)D_0037B9B0) += 1;
            (*(s32 *)D_0037B984) = 1;
            temp_v0 = func_0017A088();
            (*(s32 *)D_0037B984) = 0;
            if ((*(s32 *)D_0037B974) == 1) {
                (*(s32 *)D_0037B974) = 0;
                func_0015F9E8();
            }
            if (temp_v0 == 0) {
                if ((func_0015FEA0() == 1) && (func_0015FA00(*(s32 *)0x37B9E0) == *(s32 *)0x37B9E0)) {
                    func_0015F998(*(s32 *)0x37B9E0);
                }
                if ((*(s32 *)D_0037B974) != 1) {
                    func_00160E60();
                    (*(s32 *)D_0037BA58) = 1;
                }
                func_0015F9E8();
            }
        } while ((*(s64 *)D_0037BA28) == 0);
    }
    *(s64 *)0x37BA30 = 1;
    func_001051A0();
}
