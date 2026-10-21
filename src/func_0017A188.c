/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
typedef signed int Sint32;
void func_0017A188();
Sint32 D_00179CE8(Sint32, Sint32 (*)(void*), void*);
void D_00179E30(Sint32, Sint32, Sint32 (*)(void*), void*);
void D_00179DB8(Sint32 svtype, Sint32 id);
extern volatile Sint32 D_00396E0C;
extern Sint32 (*svm_test_and_set_callback)();
void D_00179DB8(Sint32 group, Sint32 id);
void D_00179E30(Sint32 svtype, Sint32 id, Sint32 (*func)(void*), void* object);
void func_0017A188() {
    if (D_00396E0C == 0) {
        func_0017A0E0();
    }
    D_00396E0C += 1;
}