/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern char *func_001F08B0(s32 id);
extern u32 func_001C80F0(const char *text);
extern void *Pes6Heap_Alloc(s32 size, s32 alignment);
extern void Pes6Heap_Free(void *text);
extern s32 sprintf(char *out, const char *format, ...);
extern char D_00CC0018[];
extern s32 func_001D6D30(s32 group, s32 index);
extern s32 func_00B8FC70(void *label, s32 group, s32 index, const char *text);
void func_00B92870(void *label, s32 group, s32 index, s32 number) {
    char *text;
    char *format = func_001F08B0(func_001D6D30(group, index));
    if (!format) {
        text = D_00CC0018;
    } else {
        text = Pes6Heap_Alloc(func_001C80F0(format) + 16, 1);
        sprintf(text, format, number);
    }
    func_00B8FC70(label, group, index, text);
    Pes6Heap_Free(text);
}
