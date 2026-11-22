/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0NormalLightMatrix). See THIRD_PARTY.md.
 */

extern void func_00198EF8(void *dst, void *src);
extern void func_00198EB8(void *dst, void *src);
extern void func_00199060(void *dst, void *src, float scale);

void func_001994E0(void *m, void *l0, void *l1, void *l2) {
    float buf[4];
    func_00199060(buf, l0, -1.0f);
    func_00198EB8(m, buf);
    func_00199060(buf, l1, -1.0f);
    func_00198EB8(((char *)m) + 0x10, buf);
    func_00199060(buf, l2, -1.0f);
    func_00198EB8(((char *)m) + 0x20, buf);
    {
        float fzero = 0.0f;
        *((float *)(((char *)m) + 0x38)) = fzero;
        *((float *)(((char *)m) + 0x3C)) = 1.0f;
        *((float *)(((char *)m) + 0x34)) = fzero;
        *((float *)(((char *)m) + 0x30)) = fzero;
    }
    func_00198EF8(m, m);
}
