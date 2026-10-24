/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern char D_005E92A0[];
extern char D_005E92A4[];
extern void *func_00154060(s32, s32);
extern s32 func_001C80F0(const char *);
extern char *func_001C7F58(char *, const char *);
void func_002EDA30(s32 count, const char **strings) {
    const char **cursor = strings;
    s32 index;
    s32 offset;
    *(s32 *)D_005E92A0 = count;
    *(void **)D_005E92A4 = func_00154060(count, 4);
    index = 0;
    if (count > 0) {
        offset = 0;
        do {
            *(void **)(*(u8 **)D_005E92A4 + offset) = func_00154060(func_001C80F0(*cursor) + 1, 1);
            func_001C7F58(*(char **)(*(u8 **)D_005E92A4 + offset), *cursor);
            index += 1;
            cursor += 1;
            offset += 4;
        } while (index < count);
    }
}
