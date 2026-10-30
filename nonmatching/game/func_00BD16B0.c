/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009A71F0(void);
extern void func_001A5550(void *);
extern void func_001A5620(void *);
extern void func_002727C0(s32);
extern void func_001A5670(f32);
M2C_UNK func_009B6420(u16, s32);                    /* extern */
M2C_UNK func_00B25D40();                            /* extern */
extern s32 D_003E9CA0;
extern s32 D_003EA730;
extern f32 D_003EA744;
extern char D_00591C09[];
extern char D_00591DB4[];
extern char D_00591DC4[];
extern char D_00591F12[];
extern char D_005922F6[];
extern char D_00592710[];
extern char D_00592720[];
extern char D_00CBAA02[];

s32 func_00BD16B0(void) {
    (*(s32 *)D_00591DC4) = D_003EA730;
    if ((*(u8 *)D_00591C09) != 5) {
        (*(s8 *)D_00591F12) = 1;
    }
    (*(s8 *)D_005922F6) = 1;
    (*(s8 *)D_00591DB4) = 1;
    func_009B6420((*(u16 *)D_00CBAA02), D_003EA730);
    func_009A71F0();
    func_002727C0(3);
    D_003E9CA0 = 0;
    func_00B25D40();
    func_001A5620(((void *)D_00592720));
    func_001A5550(((void *)D_00592710));
    func_001A5670(D_003EA744);
    return 1;
}
