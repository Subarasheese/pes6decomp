/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Result { char bytes[36]; };
struct Request { struct Result result; char name[256]; void *self; int mode; };
typedef struct { char pad[0x24]; int f24; } Dev;
extern struct Request D_003F3640;
extern Dev D_003F37C0;
extern int D_003F3780;
extern volatile int _sceCd_ncmd_semid;
extern int D_00372A9C, D_00372ACC, D_00372A90;
extern char D_003C4158[], D_003C4178[], D_003C4190[], D_003C41A0[], D_003C41B0[];
extern void func_00113590(void);
extern int func_001053B0(int);
extern int func_00113D78(int);
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, int, int);
extern void printf(const char *, ...);
extern void sceSifWriteBackDCache(void *, int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern void func_00105380(int);
int func_00113868(struct Result *out, char *name, int mode) {
    int i, d, result;
    func_00113590();
    if (_sceCd_ncmd_semid != func_001053B0(_sceCd_ncmd_semid)) return 0;
    D_00372A9C = 1;
    if (func_00113D78(1)) {
        func_00105380(_sceCd_ncmd_semid);
        return 0;
    }
    {
        sceSifInitRpc(0);
        if (D_00372ACC < 0) {
            for (;;) {
                if (sceSifBindRpc(&D_003F37C0, 0x80000597, 0) < 0) {
                    if (D_00372A90 > 0) printf(D_003C4158);
                    for (d = 0x100000; d != -1; d--) ;
                    continue;
                }
                if (D_003F37C0.f24 != 0) { D_00372ACC = 0; break; }
                for (d = 0x100000; d != -1; d--) ;
            }
        }
        for (i = 0; i < 256; i++) {
            if (!(D_003F3640.name[i] = name[i])) break;
        }
        if (i == 256) D_003F3640.name[255] = 0;
        if (D_00372A90 > 0) printf(D_003C4178, D_003F3640.name);
        D_003F3640.mode = mode;
        D_003F3640.self = &D_003F3640;
        sceSifWriteBackDCache(&D_003F3640, 300);
        if (sceSifCallRpc(&D_003F37C0, 0, 0, &D_003F3640, 300, &D_003F3780, 4, 0, 0) < 0) {
            func_00105380(_sceCd_ncmd_semid);
            return 0;
        }
        {
            *out = *(struct Result *)((unsigned int)&D_003F3640 | 0x20000000);
            if (D_00372A90 > 0) printf(D_003C4190, out->bytes + 8);
            if (D_00372A90 > 0) printf(D_003C41A0, *(int *)(out->bytes + 4));
            if (D_00372A90 > 0) printf(D_003C41B0, *(int *)out->bytes);
            result = *(int *)((unsigned int)&D_003F3780 | 0x20000000);
            func_00105380(_sceCd_ncmd_semid);
            return result;
        }
    }
}
