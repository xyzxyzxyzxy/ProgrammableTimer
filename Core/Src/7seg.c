/*
 * 7seg.c
 *
 *  Created on: Jun 30, 2021
 *      Author: ga
 */
#include "7seg.h"

void write_D1()
{
  HAL_GPIO_WritePin(D_PORT, D1_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(D_PORT, D2_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(D_PORT, D3_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(D_PORT, D4_PIN, GPIO_PIN_SET);
}

void write_D2()
{
	HAL_GPIO_WritePin(D_PORT, D1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D2_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D_PORT, D3_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D4_PIN, GPIO_PIN_SET);
}

void write_D3()
{
	HAL_GPIO_WritePin(D_PORT, D1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D2_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D3_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D_PORT, D4_PIN, GPIO_PIN_SET);
}

void write_D4()
{
	HAL_GPIO_WritePin(D_PORT, D1_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D2_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D3_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D_PORT, D4_PIN, GPIO_PIN_RESET);
}

// the functions for writing characters to the display
void print_0() // writing 0
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_1() // writing 1
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_2() // writing 2
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_3() // writing 3
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_4() // writing 4
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_5() // writing 5
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_6() // writing 6
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_7() // writing 7
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_8() // writing 8
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_9() // writing 9
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_A() // writing A
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_b() // writing b
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_C() // writing C
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_d() // writing d
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_E() // writing E
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_F() // writing F
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_H() // writing H
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_h() // writing h
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_J() // writing J
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_L() // writing L
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_n() // writing n
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_O() // writing O
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_o() // writing o
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_P() // writing P
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_r() // writing r
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_t() // writing t
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_u() // writing u
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_y() // writing y
{
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_wait() {
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

void print_decimal() // writing the decimal point
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_SET);
}

void print_OFF() // turning all 7 segments plus the decimal point off
{
	HAL_GPIO_WritePin(DIODE_PORT, DIODE_A_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_B_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_C_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_D_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_E_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_F_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_G_PIN, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(DIODE_PORT, DIODE_DP_PIN, GPIO_PIN_RESET);
}

