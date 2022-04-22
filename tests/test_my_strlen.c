/*
** EPITECH PROJECT, 2022
** Test_my_strlen
** File description:
** For check my_strlen_func
*/

#include "../includes/tetris_lib.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_my_strlen, my_strlen)
{
    int check = my_strlen("Rawdath");
    cr_assert_eq(check, 7);
}
