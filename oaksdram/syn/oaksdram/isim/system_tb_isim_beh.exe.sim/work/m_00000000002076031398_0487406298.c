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
static const char *ng0 = "/home/jessb/Projects/hdl/oaksdram/fsmc.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {3U, 0U};



static void Always_76_0(char *t0)
{
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

LAB0:    t1 = (t0 + 4132U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4156);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1092U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(86, ng0);

LAB10:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3068);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1276U);
    t3 = *((char **)t2);
    t2 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3252);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1460U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1552U);
    t3 = *((char **)t2);
    t2 = (t0 + 3436);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1644U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1736U);
    t3 = *((char **)t2);
    t2 = (t0 + 3620);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);

LAB9:    xsi_set_current_line(78, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3068);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3252);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3436);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_98_1(char *t0)
{
    char t14[8];
    char t32[8];
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
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 4268U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 4292);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1092U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(112, ng0);

LAB10:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 264);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t11, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 344);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 504);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 584);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(216, ng0);

LAB103:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(99, ng0);

LAB9:    xsi_set_current_line(100, ng0);
    t11 = (t0 + 264);
    t12 = *((char **)t11);
    t11 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2332);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(115, ng0);

LAB25:    xsi_set_current_line(117, ng0);
    t5 = ((char*)((ng3)));
    t12 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2332);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3252);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t14) = 1;

LAB29:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB24;

LAB14:    xsi_set_current_line(132, ng0);

LAB34:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3252);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t23 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t23);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB38;

LAB35:    if (t20 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t14) = 1;

LAB38:    t30 = (t14 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB24;

LAB16:    xsi_set_current_line(166, ng0);

LAB68:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3252);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3436);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t11) == 0)
        goto LAB73;

LAB75:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB76:    t15 = (t14 + 4);
    t23 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t14) = t17;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB78;

LAB77:    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 1U);
    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t37 = (t29 != 0);
    if (t37 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(186, ng0);

LAB88:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 344);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB81:
LAB71:    goto LAB24;

LAB18:    xsi_set_current_line(192, ng0);

LAB89:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 1920U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB90;

LAB91:
LAB92:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 3252);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB94;

LAB95:
LAB96:    goto LAB24;

LAB20:    xsi_set_current_line(208, ng0);

LAB98:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3252);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB24;

LAB28:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(126, ng0);

LAB33:    xsi_set_current_line(127, ng0);
    t30 = (t0 + 344);
    t31 = *((char **)t30);
    t30 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 8, 0LL);
    goto LAB32;

LAB37:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(134, ng0);

LAB42:    xsi_set_current_line(137, ng0);
    t31 = (t0 + 3068);
    t33 = (t31 + 36U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 24, 24, 2U, t35, 8, t34, 16);
    t36 = (t0 + 2240);
    xsi_vlogvar_wait_assign_value(t36, t32, 0, 0, 24, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3252);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3436);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t11) == 0)
        goto LAB47;

LAB49:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB50:    t15 = (t14 + 4);
    t23 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t14) = t17;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB52;

LAB51:    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 1U);
    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t37 = (t29 != 0);
    if (t37 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t11) == 0)
        goto LAB57;

LAB59:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB60:    t15 = (t14 + 4);
    t23 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t14) = t17;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB62;

LAB61:    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 1U);
    t24 = (t14 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t37 = (t29 != 0);
    if (t37 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(158, ng0);

LAB67:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 344);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB65:
LAB55:
LAB45:    goto LAB41;

LAB43:    xsi_set_current_line(140, ng0);

LAB46:    xsi_set_current_line(141, ng0);
    t12 = (t0 + 264);
    t15 = *((char **)t12);
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t15, 0, 0, 8, 0LL);
    goto LAB45;

LAB47:    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB52:    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t18 | t19);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t15) = (t20 | t21);
    goto LAB51;

LAB53:    xsi_set_current_line(143, ng0);

LAB56:    xsi_set_current_line(145, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB55;

LAB57:    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB62:    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t18 | t19);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t15) = (t20 | t21);
    goto LAB61;

LAB63:    xsi_set_current_line(150, ng0);

LAB66:    xsi_set_current_line(152, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 504);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 2U, t11, 16, t5, 16);
    t12 = (t0 + 2332);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 32, 0LL);
    goto LAB65;

LAB69:    xsi_set_current_line(168, ng0);

LAB72:    xsi_set_current_line(169, ng0);
    t15 = ((char*)((ng3)));
    t23 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t23, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB71;

LAB73:    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB78:    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t18 | t19);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t15) = (t20 | t21);
    goto LAB77;

LAB79:    xsi_set_current_line(172, ng0);

LAB82:    xsi_set_current_line(173, ng0);
    t30 = (t0 + 1920U);
    t31 = *((char **)t30);
    t30 = (t31 + 4);
    t38 = *((unsigned int *)t30);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(182, ng0);

LAB87:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB85:    goto LAB81;

LAB83:    xsi_set_current_line(173, ng0);

LAB86:    xsi_set_current_line(176, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1828U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 65535U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 65535U);
    t11 = (t0 + 2148);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 16, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 584);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB85;

LAB90:    xsi_set_current_line(194, ng0);

LAB93:    xsi_set_current_line(197, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2700);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 584);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB92;

LAB94:    xsi_set_current_line(202, ng0);

LAB97:    xsi_set_current_line(203, ng0);
    t12 = (t0 + 264);
    t15 = *((char **)t12);
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t15, 0, 0, 8, 0LL);
    goto LAB96;

LAB99:    xsi_set_current_line(210, ng0);

LAB102:    xsi_set_current_line(211, ng0);
    t15 = (t0 + 264);
    t23 = *((char **)t15);
    t15 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t15, t23, 0, 0, 8, 0LL);
    goto LAB101;

}


extern void work_m_00000000002076031398_0487406298_init()
{
	static char *pe[] = {(void *)Always_76_0,(void *)Always_98_1};
	xsi_register_didat("work_m_00000000002076031398_0487406298", "isim/system_tb_isim_beh.exe.sim/work/m_00000000002076031398_0487406298.didat");
	xsi_register_executes(pe);
}
