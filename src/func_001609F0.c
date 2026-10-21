/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
} ADXM_TPRM;
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_usrvsync;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
        int prio_usridle;
} ADXM_TPRM_EX;
void func_0015FED8(ADXM_TPRM *tprm);
typedef struct {
    int prio_lock;
    int prio_safe;
    int prio_adx;
    int prio_main;
} ADXPS2_TPRM;
void func_001609F0(ADXPS2_TPRM *tprm);
void func_001609F0(ADXPS2_TPRM* tprm) {
    ADXM_TPRM_EX _tprm;
    ADXM_TPRM_EX* tprm_p;
    if (tprm != 0) {
        _tprm.prio_main = tprm->prio_main;
        _tprm.prio_lock = tprm->prio_lock;
        _tprm.prio_safe = tprm->prio_safe;
        _tprm.prio_vsync = tprm->prio_adx + 1;
        _tprm.prio_mwidle = 25;
        _tprm.prio_usrvsync = tprm->prio_adx;
        tprm_p = &_tprm;
    } else {
        tprm_p = 0;
    }
    func_0015FED8(tprm_p);
}