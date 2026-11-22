/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00900D20(void);
extern void func_00900F50(s32);
extern s32 func_0090A130(char *);
extern s32 func_0090A230(char *, char *);
extern s32 func_0090A410(s32, s32, s32, float);

extern s8 **Pes6Ball_Current;
extern char D_0092AFE0[];
extern char D_0092F0FA[];
extern char D_0092F258[];

s32 func_00901290(void) {
    char *temp_a0;

    func_00900F50(0);
    func_00900F50(1);
    func_00900D20();
    **Pes6Ball_Current = 1;
    func_0090A410(0x33, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    temp_a0 = ((char *)D_0092AFE0) + ((*(s16 *)D_0092F258) * 0xC);
    func_0090A230(temp_a0, temp_a0 + 4);
    func_0090A130(((char *)D_0092AFE0) + ((*(s16 *)D_0092F258) * 0xC) + 8);
    return 1;
}
