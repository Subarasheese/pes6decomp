/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef int s32;

struct G {
    char pad[0x24];
    s32 f24;
};

extern s32 D_005CAC00;
extern struct G D_01204F00;
extern char D_01204D00[];
extern char D_01204F28[];

extern s32 func_0019EC50(struct G *, s32, s32);
extern s32 func_0019EE30(struct G *, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_001A36E8(int unused0) {
    s32 w;
    s32 r;

    if (D_005CAC00 < 0) {
        for (;;) {
            r = func_0019EC50(&D_01204F00, 0x80000006, 0);
            if (r < 0) {
                return -1;
            }
            if (D_01204F00.f24 != 0) {
                D_005CAC00 = 0;
                if (func_0019EE30(&D_01204F00, 0xFF, 0, 0, 0, D_01204D00, 4, 0, 0) < 0) {
                    return 0xFFFEFFFF;
                }
                __builtin_memcpy(D_01204F28, D_01204D00, 4);
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
