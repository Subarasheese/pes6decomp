/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
typedef char Char8;
void func_00179788(const Char8* msg);
typedef struct {
    void (*func)(void*, Char8*);
    void* object;
} SVMErrorCallback;
extern Char8 D_00396E58[128];
extern SVMErrorCallback D_00510FB0;
void func_00179788(const Char8* msg) {
    strncpy(D_00396E58, msg, sizeof(D_00396E58) - 1);
    if (D_00510FB0.func != 0) {
        D_00510FB0.func(D_00510FB0.object, D_00396E58);
    }
}