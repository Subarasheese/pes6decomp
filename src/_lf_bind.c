/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;

struct G {
    char pad[0x24];
    s32 f24;
};

extern s32 D_003713B0;
extern struct G D_003EF8C0;
extern char D_003EF6C0[];
extern char D_003EF8E8[];

extern s32 sceSifBindRpc(struct G *, s32, s32);
extern s32 sceSifCallRpc(struct G *, s32, s32, s32, s32, char *, s32, s32, s32);

s32 _lf_bind(int unused0) {
    s32 w;
    s32 r;

    if (D_003713B0 < 0) {
        for (;;) {
            r = sceSifBindRpc(&D_003EF8C0, 0x80000006, 0);
            if (r < 0) {
                return -1;
            }
            if (D_003EF8C0.f24 != 0) {
                D_003713B0 = 0;
                if (sceSifCallRpc(&D_003EF8C0, 0xFF, 0, 0, 0, D_003EF6C0, 4, 0, 0) < 0) {
                    return 0xFFFEFFFF;
                }
                __builtin_memcpy(D_003EF8E8, D_003EF6C0, 4);
                return 0;
            }
            w = 0x100000;
            do {
                w = w - 1;
            } while (w != -1);
        }
    }
    return 0;
}
