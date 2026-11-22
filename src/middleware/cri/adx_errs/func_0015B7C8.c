/* compiler: ee-gcc-2.96 */
#include "types.h"

extern void func_0015D1A0(void);
extern void *func_001C48E8(void *, int, unsigned int);

extern char D_00378190[];
extern char D_00378198[];
extern char D_003785D8[];
extern char D_003789D8[];
extern char D_003789E0[];
extern char D_00378AE0[];
extern char D_00378B00[];
extern char D_00378B04[];
extern char D_00378B08[];
extern char D_00378B0C[];
extern char D_00378B10[];

void func_0015B7C8(void) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_00378190) - 1;
    (*(s32 *)D_00378190) = temp_v0;
    if (temp_v0 == 0) {
        func_0015D1A0();
        (*(s32 *)D_00378B10) = 1;
        (*(s32 *)D_00378B0C) = -1;
        (*(s32 *)D_00378B08) = 0;
        (*(s32 *)D_00378B04) = 0;
        (*(s32 *)D_003789D8) = 0;
        (*(s32 *)D_00378B00) = 0;
        func_001C48E8(((void *)D_00378AE0), 0, 0x20);
        func_001C48E8(((void *)D_003789E0), 0xFF, 0x100);
        func_001C48E8(((void *)D_003785D8), 0, 0x400);
        func_001C48E8(((void *)D_00378198), 0, 0x440);
    }
}
