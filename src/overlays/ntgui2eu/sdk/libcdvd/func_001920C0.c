/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005CA400;
extern int D_005C9FC0[];
extern int D_005CA968, D_005CA96C, D_005CA970;
extern int D_005C8DEC;
extern char D_005CA940[];
int func_001916E0(int);
void func_0019B140(int);
int func_0019E3F8(void *, int);
int func_0019EE30(void *, int, int, void *, int, void *, int, void *, void *);
int func_001920C0(int arg0) {
    int r;
    int *p = &D_005CA400;
    if (func_001916E0(0x22) == 0) return 0;
    *p = arg0;
    func_0019E3F8(p, 4);
    if (func_0019EE30(D_005CA940, D_005CA968, 0, p, D_005CA96C, D_005C9FC0, D_005CA970, 0, 0) < 0) {
        func_0019B140(D_005C8DEC);
        return 0;
    }
    r = *(int *)((unsigned int)D_005C9FC0 | 0x20000000);
    func_0019B140(D_005C8DEC);
    return r;
}
