/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef signed long Sint64;
void func_001051A0(void);
extern Sint64 volatile D_0037B9E8;
extern Sint64 volatile D_0037B9F0;
void func_0015F438(void);
void func_0015F450() {
    while (D_0037B9E8 == 0) {
        func_0015F438();
    }
    D_0037B9F0 = 1;
    func_001051A0();
}