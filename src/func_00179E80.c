/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
void func_00179E80(void (*func)(void*), void* object);
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback;
extern SVMLockCallback D_00510FA8;
void func_00179E80(void (*func)(void*), void* object) {
    D_00510FA8.func = func;
    D_00510FA8.object = object;
}