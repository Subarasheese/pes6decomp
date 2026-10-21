/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void SVM_DelCbSvr(Sint32 svtype, Sint32 id);
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback;
extern volatile Sint32 D_00396E10;
extern volatile Sint32 D_00396E14;
extern Sint32 (*svm_test_and_set_callback)();
extern SVMLockCallback D_00510FA0;
void func_001794C0(Sint32 type) {
    if (D_00510FA0.func == 0) {
        return;
    }
    D_00510FA0.func(D_00510FA0.object);
    if (D_00396E10 == 0) {
        D_00396E14 = type;
    }
    D_00396E10 += 1;
}
void SVM_DelCbSvr(Sint32 group, Sint32 id);
void SVM_SetCbSvrId(Sint32 svtype, Sint32 id, Sint32 (*func)(void*), void* object);