/* compiler: ee-gcc-2.96-nsa-G0 */
#include "types.h"

extern void func_00121430(s8 *, s32);
extern void func_0016EC10(void *);
extern s32 func_001C7E10(s8 *, s8 *);
extern s8 *func_001C7F58(s8 *, s8 *);
extern u32 func_001C80F0(s8 *);

extern char D_00387260[];
extern char D_003CA780[];
extern char D_003CA788[];

void func_0016F5E8(s8 *arg0, s32 arg1) {
    s8 temp_v1;

    func_001C7F58((s8 *)arg1, ((void *)D_00387260));
    temp_v1 = *arg0;
    if ((temp_v1 != 0x2F) && (temp_v1 != 0x5C)) {
        func_00121430((s8 *)arg1, (s32)((void *)D_003CA780));
    }
    func_00121430((s8 *)arg1, (s32)arg0);
    if (func_001C7E10((arg1 + func_001C80F0((s8 *)arg1)) - 2, ((void *)D_003CA788)) != 0) {
        func_00121430((s8 *)arg1, (s32)((void *)D_003CA788));
    }
    func_0016EC10((void *)arg1);
}
