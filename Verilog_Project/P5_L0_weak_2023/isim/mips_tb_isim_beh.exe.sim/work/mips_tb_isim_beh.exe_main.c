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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001490248875_3224323566_init();
    work_m_00000000003361085921_0757879789_init();
    work_m_00000000001018478007_4235459488_init();
    work_m_00000000003549586742_4144471541_init();
    work_m_00000000003827365018_1785967555_init();
    work_m_00000000002896797624_3675853999_init();
    work_m_00000000000434744705_1621229167_init();
    work_m_00000000002522041183_2972039092_init();
    work_m_00000000001940362655_1579609468_init();
    work_m_00000000004176468721_3239301648_init();
    work_m_00000000003495655446_3262371811_init();
    work_m_00000000000475018637_0886308060_init();
    work_m_00000000000848868879_4049836497_init();
    work_m_00000000003416582300_2486179119_init();
    work_m_00000000004121000500_2924402094_init();
    work_m_00000000002633697223_3677558514_init();
    work_m_00000000003660736621_0568701769_init();
    work_m_00000000002816446977_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
