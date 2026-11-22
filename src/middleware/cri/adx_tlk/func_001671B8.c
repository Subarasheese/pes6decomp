/* compiler: ee-gcc-2.96-G0 */
/* StmMgr_runStartupPass adapted from LucasPicoli/god-hand-decomp, src/cod/0032afb0.c. See
 * THIRD_PARTY.md. */
extern volatile int D_00384C60;
extern int D_00384C68;
extern char D_0037ACA8[];
extern void func_00159E88(void);
extern void func_00159EA0(void);
extern void func_00162820(void);
extern void func_00169CC8(char *ent);
extern void func_00161478(void);
void func_001671B8(void) {
    char *ent;
    int i;
    int active;
    func_00159E88();
    if (D_00384C60 != 0) {
        func_00159EA0();
        return;
    }
    D_00384C60 = 1;
    func_00159EA0();
    func_00159E88();
    func_00162820();
    D_00384C60 = 2;
    active = 1;
    ent = D_0037ACA8;
    for (i = 16 - 1; i >= 0; i--) {
        if ((*ent) == active)
            func_00169CC8(ent);
        ent += 0xC8;
    }

    D_00384C60 = 3;
    func_00161478();
    if (D_00384C68 < 0x33)
        func_00161478();
    D_00384C60 = 0;
    func_00159EA0();
}
