/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern void func_001C4730(char *, char *, s32);
extern void func_00327240(char *, char *, char *, u8);
extern void func_00327720(char *, char *, char *, u8);
extern void func_003414D0(u8 *, s32, s32);
extern char Pes6MatchSession[];

void func_00341D00(void) {
    u8 sp4F;
    char *temp_s1;
    char *temp_s2;

    if (*(u8 *)Pes6MatchSession != 0) {
        temp_s2 = Pes6MatchSession + 4;
        temp_s1 = (char *)func_0022F150() + 0x44;
        if (*(u8 *)(Pes6MatchSession + 1) != 0xFF) {
            sp4F = *(u8 *)(Pes6MatchSession + 1);
        } else {
            func_003414D0(&sp4F, 3, 0);
        }
        func_00327720(temp_s2, Pes6MatchSession + 0xBE8, Pes6MatchSession + 0xC30, sp4F);
        func_001C4730(temp_s1 + 0x400, temp_s2 + (sp4F * 0x3C) + 0x50, 0x3C);
        func_001C4730(temp_s1 + 0x46C, temp_s2 + (sp4F * 4) + 0x8E4, 4);
        func_00327240(temp_s2, Pes6MatchSession + 0xBE8, Pes6MatchSession + 0xC30, sp4F);
        func_001C4730(temp_s1, temp_s2 + (sp4F << 0xA) + 0xC8, 0x400);
        func_001C4730(temp_s1 + 0x43C, temp_s2 + 0xA60, 0x30);
    }
}
