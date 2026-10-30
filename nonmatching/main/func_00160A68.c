/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001606A8(void);
extern void func_00167190(void);
extern void func_00160690(void);
extern void func_0015E3A0(void);
extern char D_0037BA48[];

void func_00160A68(void) {
    func_00160690();
    if ((*(s32 *)D_0037BA48) != 0) {
        func_001606A8();
        return;
    }
    (*(s32 *)D_0037BA48) = 1;
    func_001606A8();
    func_00167190();
    func_0015E3A0();
    (*(s32 *)D_0037BA48) = 0;
}
