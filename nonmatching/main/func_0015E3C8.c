/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00163F40(void);
extern void func_00159E88(void);
extern void func_00163E98(void);
extern void func_00159EA0(void);
extern void func_0015D9F0(void);
extern void func_0016D138(void);
extern char D_0037AC70[];

void func_0015E3C8(void) {
    func_00159E88();
    if ((*(s32 *)D_0037AC70) != 0) {
        func_00159EA0();
        return;
    }
    (*(s32 *)D_0037AC70) = 1;
    func_00159EA0();
    (*(s32 *)D_0037AC70) = 2;
    func_0016D138();
    (*(s32 *)D_0037AC70) = 3;
    func_00163F40();
    (*(s32 *)D_0037AC70) = 4;
    func_00163E98();
    (*(s32 *)D_0037AC70) = 5;
    func_0015D9F0();
    (*(s32 *)D_0037AC70) = 6;
    func_00163E98();
    (*(s32 *)D_0037AC70) = 7;
    func_00163F40();
    (*(s32 *)D_0037AC70) = 8;
    func_0016D138();
    (*(s32 *)D_0037AC70) = 0;
}
