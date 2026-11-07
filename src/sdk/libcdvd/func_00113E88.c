/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { char pad[0x24]; int f24; } Dev;
extern volatile int D_00372AAC;
extern int D_00372A90;
extern int D_00372A98;
extern int D_00372AD4;
extern Dev D_00374600;
extern void func_00113590(void);
extern int func_00113E18(int);
extern void func_00105380(int);
extern int func_001053B0(int);
extern void printf(const char *, ...);
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, int, int);
extern char D_003C4228[];
extern char D_003C4250[];

int func_00113E88(int a) {
    int i;
    func_00113590();
    if (D_00372AAC != func_001053B0(D_00372AAC)) {
        if (D_00372A90 > 0) printf(D_003C4228, a, D_00372A98);
        return 0;
    }
    D_00372A98 = a;
    if (func_00113E18(1)) {
        func_00105380(D_00372AAC);
        return 0;
    }
    sceSifInitRpc(0);
    if (D_00372AD4 < 0) {
        for (;;) {
            if (sceSifBindRpc(&D_00374600, 0x80000593, 0) < 0) {
                if (D_00372A90 > 0) printf(D_003C4250);
                for (i = 0x100000; i != -1; i--) ;
                continue;
            }
            if (D_00374600.f24 != 0) break;
            for (i = 0x100000; i != -1; i--) ;
        }
        D_00372AD4 = 0;
    }
    return 1;
}
