/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x2f7eec00 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/jessb/Projects/hdl/oaksdram/sdram_write.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {10, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {7, 0};
static const char *ng8 = "sdram_write: ACTIVE";
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {2U, 0U};
static const char *ng12 = "sdram_write: WRITE_CMD";
static unsigned int ng13[] = {4U, 0U};
static const char *ng14 = "sdram_write: WRITE_BOTTOM_WORD";
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {6U, 0U};
static const char *ng17 = "sdram_write: go to FIFO_EMPTY_WAIT";
static const char *ng18 = "sdram_write: auto refresh";
static const char *ng19 = "\tdone waiting for the FIFO";
static const char *ng20 = "\tstart a new write cycle";
static const char *ng21 = "sdram_write: finished write state machine";
static const char *ng22 = "sdram_write: got to an unknown state";



static void Cont_93_0(char *t0)
{
    char t6[8];
    char t26[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 3820U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3032);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2940);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t26) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t26);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t26 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t74 = (t0 + 4620);
    t75 = (t74 + 32U);
    t76 = *((char **)t75);
    t77 = (t76 + 32U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t74, 0, 0);
    t87 = (t0 + 4544);
    *((int *)t87) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t26 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB14;

}

static void Cont_94_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3308);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 20);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 20);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 4656);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 4552);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_95_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4092U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3308);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4095U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4095U);
    t14 = (t0 + 4692);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 4095U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 11);
    t27 = (t0 + 4560);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_96_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3308);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 4728);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 4568);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_98_4(char *t0)
{
    char t13[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 4364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    t3 = (t0 + 4388);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1240U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(113, ng0);

LAB10:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    t2 = (t0 + 1424U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB11;

LAB12:
LAB13:    t36 = (t13 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3032);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB19;

LAB18:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB20;

LAB21:    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(128, ng0);

LAB27:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB28:    t5 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng16)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(262, ng0);

LAB98:    xsi_set_current_line(263, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB43:
LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(99, ng0);

LAB9:    xsi_set_current_line(100, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 22, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3124);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB13;

LAB14:    xsi_set_current_line(118, ng0);

LAB17:    xsi_set_current_line(120, ng0);
    t42 = ((char*)((ng4)));
    t43 = (t0 + 3216);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 1, 0LL);
    goto LAB16;

LAB19:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(124, ng0);

LAB26:    xsi_set_current_line(125, ng0);
    t42 = (t0 + 3032);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t44, 16, t45, 32);
    t47 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 16, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB25;

LAB29:    xsi_set_current_line(130, ng0);

LAB44:    xsi_set_current_line(131, ng0);
    t11 = (t0 + 1424U);
    t12 = *((char **)t11);
    t11 = (t0 + 1884U);
    t19 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t19 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t19);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t11) == 0)
        goto LAB45;

LAB47:    t36 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t36) = 1;

LAB48:    t14 = *((unsigned int *)t12);
    t15 = *((unsigned int *)t13);
    t16 = (t14 & t15);
    *((unsigned int *)t46) = t16;
    t42 = (t12 + 4);
    t43 = (t13 + 4);
    t44 = (t46 + 4);
    t17 = *((unsigned int *)t42);
    t18 = *((unsigned int *)t43);
    t20 = (t17 | t18);
    *((unsigned int *)t44) = t20;
    t21 = *((unsigned int *)t44);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB49;

LAB50:
LAB51:    t49 = (t46 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3216);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:
LAB58:
LAB54:    goto LAB43;

LAB31:    xsi_set_current_line(142, ng0);

LAB60:    xsi_set_current_line(143, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2068U);
    t3 = *((char **)t2);
    t2 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1976U);
    t3 = *((char **)t2);
    t2 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

LAB33:    xsi_set_current_line(154, ng0);

LAB61:    xsi_set_current_line(155, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 12, 12, 2U, t2, 4, t3, 8);
    t5 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3308);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 22, t11, 32);
    t12 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 22, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2480);
    t5 = (t0 + 2480);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t19 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t19, 32, 1);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t28 = (!(t6));
    if (t28 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1884U);
    t3 = *((char **)t2);
    t2 = (t0 + 3124);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1792U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t11 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB43;

LAB35:    xsi_set_current_line(181, ng0);

LAB64:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(183, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1792U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t11 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB43;

LAB37:    xsi_set_current_line(210, ng0);

LAB65:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2480);
    t5 = (t0 + 2480);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t19 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t19, 32, 1);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t28 = (!(t6));
    if (t28 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 1884U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB71;

LAB69:    if (*((unsigned int *)t2) == 0)
        goto LAB68;

LAB70:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB71:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(218, ng0);

LAB76:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(220, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);

LAB74:    goto LAB43;

LAB39:    xsi_set_current_line(223, ng0);

LAB77:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 3216);
    t5 = (t3 + 36U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1884U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t2) == 0)
        goto LAB82;

LAB84:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB85:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t2) == 0)
        goto LAB90;

LAB92:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB93:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB94;

LAB95:
LAB96:
LAB88:
LAB80:    goto LAB43;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB49:    t23 = *((unsigned int *)t46);
    t24 = *((unsigned int *)t44);
    *((unsigned int *)t46) = (t23 | t24);
    t45 = (t12 + 4);
    t47 = (t13 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t45);
    t30 = (~(t27));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t47);
    t34 = (~(t33));
    t29 = (t26 & t30);
    t48 = (t32 & t34);
    t35 = (~(t29));
    t37 = (~(t48));
    t38 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t38 & t35);
    t39 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t39 & t37);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t40 & t35);
    t41 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t41 & t37);
    goto LAB51;

LAB52:    xsi_set_current_line(131, ng0);

LAB55:    xsi_set_current_line(132, ng0);
    t55 = (t0 + 1608U);
    t56 = *((char **)t55);
    t55 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t55, t56, 0, 0, 22, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB54;

LAB56:    xsi_set_current_line(135, ng0);

LAB59:    xsi_set_current_line(136, ng0);
    t12 = ((char*)((ng2)));
    t19 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t19, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB62:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB63;

LAB66:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB67;

LAB68:    *((unsigned int *)t13) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(215, ng0);

LAB75:    xsi_set_current_line(216, ng0);
    t12 = ((char*)((ng6)));
    t19 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t19, t12, 0, 0, 8, 0LL);
    goto LAB74;

LAB78:    xsi_set_current_line(225, ng0);

LAB81:    xsi_set_current_line(226, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB80;

LAB82:    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(232, ng0);

LAB89:    xsi_set_current_line(233, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(234, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB88;

LAB90:    *((unsigned int *)t13) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(237, ng0);

LAB97:    xsi_set_current_line(238, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB96;

}


extern void work_m_00000000001265960204_4060694159_init()
{
	static char *pe[] = {(void *)Cont_93_0,(void *)Cont_94_1,(void *)Cont_95_2,(void *)Cont_96_3,(void *)Always_98_4};
	xsi_register_didat("work_m_00000000001265960204_4060694159", "isim/system_tb_isim_beh.exe.sim/work/m_00000000001265960204_4060694159.didat");
	xsi_register_executes(pe);
}
