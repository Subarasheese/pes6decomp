/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00129E30(int, int);
extern void func_00129EB0(float);
extern void func_00129E90(int, int);
extern void func_00129E50(float);
extern void func_00129B30(void);
extern void func_00129E00(float, float, float);
extern void func_00129DD0(void *);
extern void func_00129DE0(int, int);
extern void func_00129E70(float);
extern void func_0012A0B0(float, float, float);
M2C_UNK func_00129ED0(M2C_UNK);                     /* extern */
M2C_UNK func_00129FD0(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00375B70[];
extern char D_003FB402[];

void func_00129CE0(void) {
    (*(s8 *)D_003FB402) = 1;
    func_00129ED0(0xFF);
    func_0012A0B0(0.0f, 0.0f, 0.0f);
    func_00129FD0(0x47C35000, 0x48435000);
    func_00129EB0(512.0f);
    func_00129E90(0x280, 0x1C0);
    func_00129DE0(0x280, 0x1C0);
    func_00129E70(128.0f);
    func_00129E50(200000.0f);
    func_00129B30();
    func_00129E30(1, 0xFFFF);
    func_00129E00(0.3f, 0.3f, 0.3f);
    func_00129DD0(((void *)D_00375B70));
}
