/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Resume a generation-checked timer object. An already-running object returns
 * 1; successful resumption returns 0. Shared pool layout is provisional. */
struct Timer {
    struct Timer *next, *previous;
    int generation;
    unsigned flags;
    unsigned long long started;
    char unknown18[0x28];
};
struct Pool { char unknown0[0x1C]; int current; };
extern volatile struct Pool D_005CBB98;
static inline volatile struct Pool *pool_state(void) { return &D_005CBB98; }
extern unsigned long long func_001A5880(void);
extern void func_001A5518(struct Timer *);
extern void func_001A5388(unsigned long long);
int func_001A5BA8(int handle) {
    struct Timer *timer=(struct Timer *)(((unsigned)handle>>10)<<6);
    unsigned long long now;
    if(handle<0 || (handle&0x3ff)!=timer->generation) return 0x80008002;
    if(pool_state()->current==handle) return 0x80000010;
    if(timer->flags&1) return 1;
    now=func_001A5880();
    timer->started=now;
    timer->flags|=1;
    if(timer->flags&2) {
        func_001A5518(timer);
        func_001A5388(now);
    }
    return 0;
}
