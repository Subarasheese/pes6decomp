/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00372A90;
extern int _sceCd_c_cb_sem;
extern char D_00373C50[];
extern char D_003C4208[];
void func_001063D8(int);
void printf(const char *, ...);
int func_001094A8(void *);

int func_00113D78(int mode)
{
    if (mode == 0) {
        if (D_00372A90 > 0)
            printf(D_003C4208);
        while (_sceCd_c_cb_sem != 0 || func_001094A8(D_00373C50) != 0)
            func_001063D8(0xFA0);
        return 0;
    }
    if (_sceCd_c_cb_sem != 0 || func_001094A8(D_00373C50) != 0)
        return 1;
    return 0;
}
