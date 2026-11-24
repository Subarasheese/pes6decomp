/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0MulMatrix). See THIRD_PARTY.md. */
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

void sceVu0MulMatrix(void *dst, void *m0, void *m1)
{
    __asm__ __volatile__(".set noreorder\n"
                         "lqc2 $vf4, 0x0($5)\n"
                         "lqc2 $vf5, 0x10($5)\n"
                         "lqc2 $vf6, 0x20($5)\n"
                         "lqc2 $vf7, 0x30($5)\n"
                         "addiu $7, $0, 0x4\n"
                         "1:\n"
                         "lqc2 $vf8, 0x0($6)\n"
                         "vmulax.xyzw ACC, $vf4, $vf8x\n"
                         "vmadday.xyzw ACC, $vf5, $vf8y\n"
                         "vmaddaz.xyzw ACC, $vf6, $vf8z\n"
                         "vmaddw.xyzw $vf9, $vf7, $vf8w\n"
                         "sqc2 $vf9, 0x0($4)\n"
                         "addi $7, $7, -0x1\n"
                         "addi $6, $6, 0x10\n"
                         "bne $0, $7, 1b\n"
                         "addi $4, $4, 0x10\n"
                         ".set reorder\n" ::
                             : "$7", "memory");
}
