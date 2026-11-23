/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern char *func_001F08B0(s32 id);
extern u32 func_001C80F0(const char *text);
extern void *Pes6Heap_Alloc(s32 size, s32 alignment);
extern void Pes6Heap_Free(void *text);
extern s32 sprintf(char *out, const char *format, ...);
extern char D_00CC0018[];
extern void func_00B8FB70(void *label, const char *text);
void func_00B927D0(void *label, s32 id, s32 number) {
    char *text;
    char *format = func_001F08B0(id);
    if (!format) {
        text = D_00CC0018;
    } else {
        text = Pes6Heap_Alloc(func_001C80F0(format) + 16, 1);
        sprintf(text, format, number);
    }
    func_00B8FB70(label, text);
    Pes6Heap_Free(text);
}
