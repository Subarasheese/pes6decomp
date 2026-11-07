/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sjr_clt.c). */
typedef signed int Sint32;
void func_0016E7D0();
extern Sint32 D_00396294;
void SJRMT_Finish() {
    if (--D_00396294 == 0) {
        func_0016E7D0();
    }
}