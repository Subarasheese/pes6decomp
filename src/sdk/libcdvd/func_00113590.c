/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct SemaParam { int current, max, init, wait; unsigned int attr; const char *option; };
extern volatile int _sceCd_ncmd_semid, D_00372AAC, D_00372AB0, D_00372AA0, _sceCd_c_cb_sem;
extern char D_003C4110[], D_003C4120[], D_003C4130[], D_003C4140[];
extern int func_00105360(void *);
void func_00113590(void) {
    struct SemaParam p;
    if (_sceCd_ncmd_semid == -1 || D_00372AAC == -1 || D_00372AB0 == -1) {
        p.init = 1;
        p.max = 1;
        p.option = D_003C4110;
        _sceCd_ncmd_semid = func_00105360(&p);
        p.option = D_003C4120;
        D_00372AAC = func_00105360(&p);
        p.option = D_003C4130;
        D_00372AB0 = func_00105360(&p);
        p.option = D_003C4140;
        p.init = 0;
        D_00372AA0 = func_00105360(&p);
        _sceCd_c_cb_sem = 0;
    }
}
