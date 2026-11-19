/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Result { char bytes[36]; };
struct Request { struct Result result; char name[256]; void *self; int mode; };
typedef struct { char pad[0x24]; int f24; } Dev;
extern struct Request D_011FD280;
extern Dev D_011FD400;
extern int D_011FD3C0;
extern volatile int D_005C8DE8;
extern int D_005C8DDC, D_005C8E0C, D_005C8DD0;
extern char D_005FEA28[], D_005FEA48[], D_005FEA60[], D_005FEA70[], D_005FEA80[];
extern void func_00190DE8(void);
extern int func_0019B170(int);
extern int func_001915D0(int);
extern void func_0019E4A8(int);
extern int func_0019EC50(void *, int, int);
extern void func_0019DBD0(const char *, ...);
extern void func_0019E3F8(void *, int);
extern int func_0019EE30(void *, int, int, void *, int, void *, int, void *, void *);
extern void func_0019B140(int);
int func_001910C0(struct Result *out, char *name, int mode) {
    int i, d, result;
    func_00190DE8();
    if (D_005C8DE8 != func_0019B170(D_005C8DE8)) return 0;
    D_005C8DDC = 1;
    if (func_001915D0(1)) {
        func_0019B140(D_005C8DE8);
        return 0;
    }
    {
        func_0019E4A8(0);
        if (D_005C8E0C < 0) {
            for (;;) {
                if (func_0019EC50(&D_011FD400, 0x80000597, 0) < 0) {
                    if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA28);
                    for (d = 0x100000; d != -1; d--) ;
                    continue;
                }
                if (D_011FD400.f24 != 0) { D_005C8E0C = 0; break; }
                for (d = 0x100000; d != -1; d--) ;
            }
        }
        for (i = 0; i < 256; i++) {
            if (!(D_011FD280.name[i] = name[i])) break;
        }
        if (i == 256) D_011FD280.name[255] = 0;
        if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA48, D_011FD280.name);
        D_011FD280.mode = mode;
        D_011FD280.self = &D_011FD280;
        func_0019E3F8(&D_011FD280, 300);
        if (func_0019EE30(&D_011FD400, 0, 0, &D_011FD280, 300, &D_011FD3C0, 4, 0, 0) < 0) {
            func_0019B140(D_005C8DE8);
            return 0;
        }
        {
            *out = *(struct Result *)((unsigned int)&D_011FD280 | 0x20000000);
            if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA60, out->bytes + 8);
            if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA70, *(int *)(out->bytes + 4));
            if (D_005C8DD0 > 0) func_0019DBD0(D_005FEA80, *(int *)out->bytes);
            result = *(int *)((unsigned int)&D_011FD3C0 | 0x20000000);
            func_0019B140(D_005C8DE8);
            return result;
        }
    }
}
