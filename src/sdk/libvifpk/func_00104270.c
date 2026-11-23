/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0NormalLightMatrix). See THIRD_PARTY.md.
 */

extern void sceVu0TransposeMatrix(void *dst, void *src);
extern void sceVu0Normalize(void *dst, void *src);
extern void func_00103DF0(void *dst, void *src, float scale);

void func_00104270(void *m, void *l0, void *l1, void *l2) {
    float buf[4];
    func_00103DF0(buf, l0, -1.0f);
    sceVu0Normalize(m, buf);
    func_00103DF0(buf, l1, -1.0f);
    sceVu0Normalize(((char *)m) + 0x10, buf);
    func_00103DF0(buf, l2, -1.0f);
    sceVu0Normalize(((char *)m) + 0x20, buf);
    {
        float fzero = 0.0f;
        *((float *)(((char *)m) + 0x38)) = fzero;
        *((float *)(((char *)m) + 0x3C)) = 1.0f;
        *((float *)(((char *)m) + 0x34)) = fzero;
        *((float *)(((char *)m) + 0x30)) = fzero;
    }
    sceVu0TransposeMatrix(m, m);
}
