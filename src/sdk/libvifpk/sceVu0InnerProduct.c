/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0InnerProduct). See THIRD_PARTY.md. */
/* VU0 macro-mode instructions, which C cannot express: Sony's libvu0 writes it as assembly. */

#define VU0_MEM(insn) __asm__ __volatile__(insn : : : "memory")
#define VU0_REG(insn) __asm__ __volatile__(insn)
#define VU0_LSV(mnem, vf, off, base) VU0_MEM(#mnem " $vf" #vf ", " #off "($" #base ")")
#define VU0_LSGP(mnem, gp, off, base) VU0_MEM(#mnem " $" #gp ", " #off "($" #base ")")
#define VU0_V2OP(mnem, d, a) VU0_REG(#mnem " $vf" #d ", $vf" #a)
#define VU0_V3OP(mnem, d, a, b) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b)
#define VU0_V3OP_BC(mnem, d, a, b, bc) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b #bc)
#define VU0_V3OP_ACC(mnem, a, b) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b)
#define VU0_V3OP_ACC_BC(mnem, a, b, bc) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b #bc)
#define VU0_MFC1(gp, fp) VU0_REG("mfc1 $" #gp ", $f" #fp)
#define VU0_QMTC2_NI(gp, vf) VU0_REG("qmtc2.ni $" #gp ", $vf" #vf)
/* vwaitq: no memory effect, sequences later VU0 ops with prior compute. */
#define VU0_WAIT() __asm__ __volatile__("vwaitq")
/* Several COP2 transfer pairs have a load-delay or Q-pipeline interlock that
   gas's default `.set reorder` would fill with a nop; those runs are written
   noreorder. */
#define VU0_NOREORDER_BEGIN() __asm__ __volatile__(".set noreorder")
#define VU0_NOREORDER_END() __asm__ __volatile__(".set reorder")

float sceVu0InnerProduct(void *a, void *b)
{
    float ret;
    __asm__ __volatile__(".set noreorder\n"
                         "lqc2 $vf4, 0x0($4)\n"
                         "lqc2 $vf5, 0x0($5)\n"
                         "vmul.xyz $vf5, $vf4, $vf5\n"
                         "vaddy.x $vf5, $vf5, $vf5y\n"
                         "vaddz.x $vf5, $vf5, $vf5z\n"
                         "qmfc2.ni $2, $vf5\n"
                         "mtc1 $2, %0\n"
                         ".set reorder\n"
                         : "=f"(ret)::"$2");
    return ret;
}
