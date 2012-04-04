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
static const char *ng0 = "/home/jessb/Projects/hdl/oaksdram/sdram_read.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {7U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "sdram_read: ACTIVATE: %b";
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {2U, 0U};
static const char *ng10 = "sdram_read: READ_COMMAND: %b";
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {3, 0};
static const char *ng13 = "sdram_read: READ_TOP_WORD";
static unsigned int ng14[] = {4U, 0U};
static const char *ng15 = "sdram_read: reached end of column Issue PRECHARGE: %b";
static int ng16[] = {10, 0};
static const char *ng17 = "sdram_read: precharge: %b";
static const char *ng18 = "sdram_read: READ_BOTTOM_WORD";
static unsigned int ng19[] = {6U, 0U};
static const char *ng20 = "sdram_read: auto refresh command: %b";
static int ng21[] = {7, 0};
static const char *ng22 = "sdram_read: FIFO full waiting...";
static const char *ng23 = "\tdone waiting for the FIFO";
static const char *ng24 = "\tstart a new read cycle";
static const char *ng25 = "sdram_read: got to an unknown state";
static unsigned int ng26[] = {4294967295U, 0U};
static int ng27[] = {31, 0};
static int ng28[] = {16, 0};
static int ng29[] = {15, 0};



static void Cont_104_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5176);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}

static void Cont_105_1(char *t0)
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

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3032);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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
    t25 = ((char*)((ng1)));
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
LAB14:    t74 = (t0 + 5212);
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
    t87 = (t0 + 5092);
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

static void Cont_107_2(char *t0)
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3400);
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
    t14 = (t0 + 5248);
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
    t27 = (t0 + 5100);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_108_3(char *t0)
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

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3400);
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
    t14 = (t0 + 5284);
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
    t27 = (t0 + 5108);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_109_4(char *t0)
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

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3400);
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
    t14 = (t0 + 5320);
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
    t27 = (t0 + 5116);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_119_5(char *t0)
{
    char t13[8];
    char t46[8];
    char t63[8];
    char t64[8];
    char t94[8];
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
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5124);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
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

LAB7:    xsi_set_current_line(137, ng0);

LAB10:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 1700U);
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
LAB16:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3032);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB24:    xsi_set_current_line(148, ng0);

LAB27:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB28:    t5 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng19)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t28 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(302, ng0);

LAB172:    xsi_set_current_line(303, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB45:
LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(120, ng0);

LAB9:    xsi_set_current_line(121, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 22, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3124);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 22, 0LL);
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

LAB14:    xsi_set_current_line(140, ng0);

LAB17:    xsi_set_current_line(142, ng0);
    t42 = ((char*)((ng4)));
    t43 = (t0 + 3124);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 1, 0LL);
    goto LAB16;

LAB19:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(145, ng0);

LAB26:    xsi_set_current_line(146, ng0);
    t42 = (t0 + 3032);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t44, 8, t45, 32);
    t47 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 8, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB25;

LAB29:    xsi_set_current_line(149, ng0);

LAB46:    xsi_set_current_line(150, ng0);
    t11 = (t0 + 1700U);
    t12 = *((char **)t11);
    t11 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    t2 = (t0 + 1976U);
    t5 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t2) == 0)
        goto LAB47;

LAB49:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB50:    t12 = (t13 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB52;

LAB51:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t46) = t25;
    t36 = (t3 + 4);
    t42 = (t13 + 4);
    t43 = (t46 + 4);
    t26 = *((unsigned int *)t36);
    t27 = *((unsigned int *)t42);
    t30 = (t26 | t27);
    *((unsigned int *)t43) = t30;
    t31 = *((unsigned int *)t43);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB53;

LAB54:
LAB55:    t47 = (t46 + 4);
    t56 = *((unsigned int *)t47);
    t57 = (~(t56));
    t58 = *((unsigned int *)t46);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3124);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB58:    goto LAB45;

LAB31:    xsi_set_current_line(166, ng0);

LAB64:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng7)));
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 3);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2068U);
    t3 = *((char **)t2);
    t2 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB45;

LAB33:    xsi_set_current_line(176, ng0);

LAB65:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng11)));
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t3, 3);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 2252U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 12, 12, 2U, t2, 4, t3, 8);
    t5 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3400);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 22, t11, 32);
    t12 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 22, 0LL);
    goto LAB45;

LAB35:    xsi_set_current_line(185, ng0);

LAB66:    xsi_set_current_line(186, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    t2 = (t0 + 3308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    t2 = (t0 + 1976U);
    t5 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t2) == 0)
        goto LAB67;

LAB69:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB70:    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t13);
    t16 = (t14 & t15);
    *((unsigned int *)t46) = t16;
    t12 = (t3 + 4);
    t19 = (t13 + 4);
    t36 = (t46 + 4);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t19);
    t20 = (t17 | t18);
    *((unsigned int *)t36) = t20;
    t21 = *((unsigned int *)t36);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB71;

LAB72:
LAB73:    t44 = (t0 + 1608U);
    t45 = *((char **)t44);
    memset(t63, 0, 8);
    t44 = (t45 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t45);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB77;

LAB75:    if (*((unsigned int *)t44) == 0)
        goto LAB74;

LAB76:    t47 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t47) = 1;

LAB77:    t53 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t63);
    t55 = (t53 & t54);
    *((unsigned int *)t64) = t55;
    t61 = (t46 + 4);
    t62 = (t63 + 4);
    t65 = (t64 + 4);
    t56 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t62);
    t58 = (t56 | t57);
    *((unsigned int *)t65) = t58;
    t59 = *((unsigned int *)t65);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB78;

LAB79:
LAB80:    t86 = (t64 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t64);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(224, ng0);

LAB98:    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng9)));
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t2, 3);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2572);
    t5 = (t0 + 2572);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t19 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t19, 32, 1);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t28 = (!(t6));
    if (t28 == 1)
        goto LAB99;

LAB100:
LAB83:    goto LAB45;

LAB37:    xsi_set_current_line(234, ng0);

LAB101:    xsi_set_current_line(235, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 3492);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t11) == 0)
        goto LAB102;

LAB104:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;

LAB105:    t19 = (t13 + 4);
    t14 = *((unsigned int *)t19);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB45;

LAB39:    xsi_set_current_line(281, ng0);

LAB145:    xsi_set_current_line(282, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB149;

LAB147:    if (*((unsigned int *)t2) == 0)
        goto LAB146;

LAB148:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB149:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 1976U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB157;

LAB155:    if (*((unsigned int *)t2) == 0)
        goto LAB154;

LAB156:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB157:    t11 = (t13 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB158;

LAB159:
LAB160:
LAB152:    goto LAB45;

LAB41:    xsi_set_current_line(294, ng0);

LAB162:    xsi_set_current_line(295, ng0);
    t3 = (t0 + 1700U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB166;

LAB164:    if (*((unsigned int *)t3) == 0)
        goto LAB163;

LAB165:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB166:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(298, ng0);

LAB171:    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB169:    goto LAB45;

LAB47:    *((unsigned int *)t13) = 1;
    goto LAB50;

LAB52:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t12) = (t18 | t20);
    goto LAB51;

LAB53:    t33 = *((unsigned int *)t46);
    t34 = *((unsigned int *)t43);
    *((unsigned int *)t46) = (t33 | t34);
    t44 = (t3 + 4);
    t45 = (t13 + 4);
    t35 = *((unsigned int *)t3);
    t37 = (~(t35));
    t38 = *((unsigned int *)t44);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t48 = *((unsigned int *)t45);
    t49 = (~(t48));
    t28 = (t37 & t39);
    t29 = (t41 & t49);
    t50 = (~(t28));
    t51 = (~(t29));
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t52 & t50);
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & t51);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & t50);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & t51);
    goto LAB55;

LAB56:    xsi_set_current_line(151, ng0);

LAB59:    xsi_set_current_line(160, ng0);
    t61 = (t0 + 1884U);
    t62 = *((char **)t61);
    t61 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t61, t62, 0, 0, 22, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(163, ng0);

LAB63:    goto LAB62;

LAB67:    *((unsigned int *)t13) = 1;
    goto LAB70;

LAB71:    t23 = *((unsigned int *)t46);
    t24 = *((unsigned int *)t36);
    *((unsigned int *)t46) = (t23 | t24);
    t42 = (t3 + 4);
    t43 = (t13 + 4);
    t25 = *((unsigned int *)t3);
    t26 = (~(t25));
    t27 = *((unsigned int *)t42);
    t30 = (~(t27));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t43);
    t34 = (~(t33));
    t28 = (t26 & t30);
    t29 = (t32 & t34);
    t35 = (~(t28));
    t37 = (~(t29));
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 & t35);
    t39 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t39 & t37);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t40 & t35);
    t41 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t41 & t37);
    goto LAB73;

LAB74:    *((unsigned int *)t63) = 1;
    goto LAB77;

LAB78:    t66 = *((unsigned int *)t64);
    t67 = *((unsigned int *)t65);
    *((unsigned int *)t64) = (t66 | t67);
    t68 = (t46 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t46);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t63);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t80);
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t80);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t81);
    goto LAB80;

LAB81:    xsi_set_current_line(197, ng0);

LAB84:    xsi_set_current_line(200, ng0);
    t92 = (t0 + 2252U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng1)));
    memset(t94, 0, 8);
    t95 = (t93 + 4);
    t96 = (t92 + 4);
    t97 = *((unsigned int *)t93);
    t98 = *((unsigned int *)t92);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB88;

LAB85:    if (t106 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t94) = 1;

LAB88:    t110 = (t94 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t94);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(214, ng0);

LAB95:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2572);
    t5 = (t0 + 2572);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t19 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t19, 32, 1);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t28 = (!(t6));
    if (t28 == 1)
        goto LAB96;

LAB97:
LAB91:    goto LAB83;

LAB87:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(200, ng0);

LAB92:    xsi_set_current_line(201, ng0);
    t116 = ((char*)((ng9)));
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)118, t116, 3);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2572);
    t5 = (t0 + 2572);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t19 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t19, 32, 1);
    t36 = (t13 + 4);
    t6 = *((unsigned int *)t36);
    t28 = (!(t6));
    if (t28 == 1)
        goto LAB93;

LAB94:    goto LAB91;

LAB93:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB94;

LAB96:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB97;

LAB99:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB100;

LAB102:    *((unsigned int *)t13) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(242, ng0);

LAB109:    xsi_set_current_line(243, ng0);
    t36 = (t0 + 1976U);
    t42 = *((char **)t36);
    memset(t46, 0, 8);
    t36 = (t42 + 4);
    t20 = *((unsigned int *)t36);
    t21 = (~(t20));
    t22 = *((unsigned int *)t42);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB113;

LAB111:    if (*((unsigned int *)t36) == 0)
        goto LAB110;

LAB112:    t43 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t43) = 1;

LAB113:    t44 = (t46 + 4);
    t25 = *((unsigned int *)t44);
    t26 = (~(t25));
    t27 = *((unsigned int *)t46);
    t30 = (t27 & t26);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(247, ng0);
    t2 = (t0 + 3308);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 1976U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB121;

LAB119:    if (*((unsigned int *)t11) == 0)
        goto LAB118;

LAB120:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;

LAB121:    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 & t15);
    *((unsigned int *)t46) = t16;
    t36 = (t5 + 4);
    t42 = (t13 + 4);
    t43 = (t46 + 4);
    t17 = *((unsigned int *)t36);
    t18 = *((unsigned int *)t42);
    t20 = (t17 | t18);
    *((unsigned int *)t43) = t20;
    t21 = *((unsigned int *)t43);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB122;

LAB123:
LAB124:    t47 = (t0 + 3124);
    t61 = (t47 + 36U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t65 = (t62 + 4);
    t48 = *((unsigned int *)t65);
    t49 = (~(t48));
    t50 = *((unsigned int *)t62);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB128;

LAB126:    if (*((unsigned int *)t65) == 0)
        goto LAB125;

LAB127:    t68 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t68) = 1;

LAB128:    t53 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t63);
    t55 = (t53 & t54);
    *((unsigned int *)t64) = t55;
    t69 = (t46 + 4);
    t86 = (t63 + 4);
    t92 = (t64 + 4);
    t56 = *((unsigned int *)t69);
    t57 = *((unsigned int *)t86);
    t58 = (t56 | t57);
    *((unsigned int *)t92) = t58;
    t59 = *((unsigned int *)t92);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB129;

LAB130:
LAB131:    t96 = (t64 + 4);
    t87 = *((unsigned int *)t96);
    t88 = (~(t87));
    t89 = *((unsigned int *)t64);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 1976U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3124);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(275, ng0);

LAB144:    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB142:
LAB138:
LAB134:    goto LAB108;

LAB110:    *((unsigned int *)t46) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(243, ng0);

LAB117:    xsi_set_current_line(244, ng0);
    t45 = ((char*)((ng4)));
    t47 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t47, t45, 0, 0, 1, 0LL);
    goto LAB116;

LAB118:    *((unsigned int *)t13) = 1;
    goto LAB121;

LAB122:    t23 = *((unsigned int *)t46);
    t24 = *((unsigned int *)t43);
    *((unsigned int *)t46) = (t23 | t24);
    t44 = (t5 + 4);
    t45 = (t13 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t44);
    t30 = (~(t27));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t45);
    t34 = (~(t33));
    t28 = (t26 & t30);
    t29 = (t32 & t34);
    t35 = (~(t28));
    t37 = (~(t29));
    t38 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t38 & t35);
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & t37);
    t40 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t40 & t35);
    t41 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t41 & t37);
    goto LAB124;

LAB125:    *((unsigned int *)t63) = 1;
    goto LAB128;

LAB129:    t66 = *((unsigned int *)t64);
    t67 = *((unsigned int *)t92);
    *((unsigned int *)t64) = (t66 | t67);
    t93 = (t46 + 4);
    t95 = (t63 + 4);
    t70 = *((unsigned int *)t46);
    t71 = (~(t70));
    t72 = *((unsigned int *)t93);
    t73 = (~(t72));
    t74 = *((unsigned int *)t63);
    t75 = (~(t74));
    t76 = *((unsigned int *)t95);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t82 & t80);
    t83 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t83 & t81);
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t80);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t81);
    goto LAB131;

LAB132:    xsi_set_current_line(247, ng0);

LAB135:    xsi_set_current_line(252, ng0);
    t109 = ((char*)((ng5)));
    t110 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 8, 0LL);
    goto LAB134;

LAB136:    xsi_set_current_line(263, ng0);

LAB139:    xsi_set_current_line(267, ng0);
    t5 = ((char*)((ng19)));
    t11 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 8, 0LL);
    goto LAB138;

LAB140:    xsi_set_current_line(269, ng0);

LAB143:    xsi_set_current_line(270, ng0);
    t12 = ((char*)((ng3)));
    t19 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t19, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng5)));
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t2, 3);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng21)));
    t3 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t2, 32, t3, 32);
    t5 = (t0 + 3032);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 8, 0LL);
    goto LAB142;

LAB146:    *((unsigned int *)t13) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(284, ng0);

LAB153:    xsi_set_current_line(285, ng0);
    t12 = ((char*)((ng1)));
    t19 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t19, t12, 0, 0, 8, 0LL);
    goto LAB152;

LAB154:    *((unsigned int *)t13) = 1;
    goto LAB157;

LAB158:    xsi_set_current_line(287, ng0);

LAB161:    xsi_set_current_line(288, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(289, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB160;

LAB163:    *((unsigned int *)t13) = 1;
    goto LAB166;

LAB167:    xsi_set_current_line(295, ng0);

LAB170:    xsi_set_current_line(296, ng0);
    t19 = ((char*)((ng1)));
    t36 = (t0 + 2940);
    xsi_vlogvar_wait_assign_value(t36, t19, 0, 0, 8, 0LL);
    goto LAB169;

}

static void Always_313_6(char *t0)
{
    char t13[8];
    char t22[8];
    char t37[8];
    char t45[8];
    char t77[8];
    char t89[8];
    char t100[8];
    char t108[8];
    char t148[8];
    char t149[8];
    char t150[8];
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    int t158;
    char *t159;
    unsigned int t160;
    int t161;
    int t162;
    char *t163;
    unsigned int t164;
    int t165;
    int t166;
    unsigned int t167;
    int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    int t172;

LAB0:    t1 = (t0 + 4912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(313, ng0);
    t2 = (t0 + 5132);
    *((int *)t2) = 1;
    t3 = (t0 + 4936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(313, ng0);

LAB5:    xsi_set_current_line(314, ng0);
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

LAB7:    xsi_set_current_line(322, ng0);

LAB10:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t23) != 0)
        goto LAB17;

LAB18:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB19;

LAB20:    memcpy(t45, t22, 8);

LAB21:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t78) != 0)
        goto LAB31;

LAB32:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB33;

LAB34:    memcpy(t108, t77, 8);

LAB35:    t140 = (t108 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t108);
    t144 = (t143 & t142);
    t145 = (t144 != 0);
    if (t145 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 3492);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB49:    xsi_set_current_line(332, ng0);
    t2 = (t0 + 2940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB62:    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(314, ng0);

LAB9:    xsi_set_current_line(315, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2756);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3492);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB17:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB19:    t34 = (t0 + 3584);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t38) != 0)
        goto LAB24;

LAB25:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t22 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t37) = 1;
    goto LAB25;

LAB24:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB25;

LAB26:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t22 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB28;

LAB29:    *((unsigned int *)t77) = 1;
    goto LAB32;

LAB31:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB32;

LAB33:    t90 = (t0 + 3492);
    t91 = (t90 + 36U);
    t92 = *((char **)t91);
    memset(t89, 0, 8);
    t93 = (t92 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t93) == 0)
        goto LAB36;

LAB38:    t99 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t99) = 1;

LAB39:    memset(t100, 0, 8);
    t101 = (t89 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t89);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t101) != 0)
        goto LAB42;

LAB43:    t109 = *((unsigned int *)t77);
    t110 = *((unsigned int *)t100);
    t111 = (t109 & t110);
    *((unsigned int *)t108) = t111;
    t112 = (t77 + 4);
    t113 = (t100 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB36:    *((unsigned int *)t89) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t100) = 1;
    goto LAB43;

LAB42:    t107 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB43;

LAB44:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t77 + 4);
    t123 = (t100 + 4);
    t124 = *((unsigned int *)t77);
    t125 = (~(t124));
    t126 = *((unsigned int *)t122);
    t127 = (~(t126));
    t128 = *((unsigned int *)t100);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (~(t130));
    t132 = (t125 & t127);
    t133 = (t129 & t131);
    t134 = (~(t132));
    t135 = (~(t133));
    t136 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t136 & t134);
    t137 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t137 & t135);
    t138 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t138 & t134);
    t139 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t139 & t135);
    goto LAB46;

LAB47:    xsi_set_current_line(323, ng0);

LAB50:    xsi_set_current_line(324, ng0);
    t146 = (t0 + 1516U);
    t147 = *((char **)t146);
    t146 = (t0 + 2756);
    t151 = (t0 + 2756);
    t152 = (t151 + 44U);
    t153 = *((char **)t152);
    t154 = ((char*)((ng27)));
    t155 = ((char*)((ng28)));
    xsi_vlog_convert_partindices(t148, t149, t150, ((int*)(t153)), 2, t154, 32, 1, t155, 32, 1);
    t156 = (t148 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (!(t157));
    t159 = (t149 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (!(t160));
    t162 = (t158 && t161);
    t163 = (t150 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (!(t164));
    t166 = (t162 && t165);
    if (t166 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3492);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB49;

LAB51:    t167 = *((unsigned int *)t150);
    t168 = (t167 + 0);
    t169 = *((unsigned int *)t148);
    t170 = *((unsigned int *)t149);
    t171 = (t169 - t170);
    t172 = (t171 + 1);
    xsi_vlogvar_wait_assign_value(t146, t147, t168, *((unsigned int *)t149), t172, 0LL);
    goto LAB52;

LAB53:    xsi_set_current_line(328, ng0);

LAB56:    xsi_set_current_line(329, ng0);
    t11 = (t0 + 1516U);
    t12 = *((char **)t11);
    t11 = (t0 + 2756);
    t21 = (t0 + 2756);
    t23 = (t21 + 44U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng29)));
    t34 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t13, t22, t37, ((int*)(t29)), 2, t30, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t14 = *((unsigned int *)t35);
    t69 = (!(t14));
    t36 = (t22 + 4);
    t15 = *((unsigned int *)t36);
    t70 = (!(t15));
    t132 = (t69 && t70);
    t38 = (t37 + 4);
    t16 = *((unsigned int *)t38);
    t133 = (!(t16));
    t158 = (t132 && t133);
    if (t158 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3492);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB57:    t17 = *((unsigned int *)t37);
    t161 = (t17 + 0);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t22);
    t162 = (t18 - t19);
    t165 = (t162 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, t161, *((unsigned int *)t22), t165, 0LL);
    goto LAB58;

LAB60:    *((unsigned int *)t13) = 1;
    goto LAB62;

LAB61:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(332, ng0);

LAB66:    xsi_set_current_line(333, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000003753725437_2136831395_init()
{
	static char *pe[] = {(void *)Cont_104_0,(void *)Cont_105_1,(void *)Cont_107_2,(void *)Cont_108_3,(void *)Cont_109_4,(void *)Always_119_5,(void *)Always_313_6};
	xsi_register_didat("work_m_00000000003753725437_2136831395", "isim/wb_sdram_isim_beh.exe.sim/work/m_00000000003753725437_2136831395.didat");
	xsi_register_executes(pe);
}
