/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0CameraMatrix). See THIRD_PARTY.md. */

extern void func_00103CD0(void *dst, void *src);
extern void func_00103C00(void *dst, void *a, void *b);
extern void func_00103C48(void *dst, void *src);
extern void func_00103E08(void *dst, void *src, void *tv);
extern void func_00103EB0(void *m);

void func_001041C0(void *m, void *p, void *zd, void *yd) {
    char buf[0x50];
    func_00103EB0(buf);
    func_00103C00(buf + 0x40, yd, zd);
    func_00103C48(buf, buf + 0x40);
    func_00103C48(buf + 0x20, zd);
    func_00103C00(buf + 0x10, buf + 0x20, buf);
    func_00103E08(buf, buf, p);
    func_00103CD0(m, buf);
}
