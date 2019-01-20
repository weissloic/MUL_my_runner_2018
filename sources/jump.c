/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void jump_norm(all_t *all)
{
    if (all->object[2].number > 0)
        all->object[2].number -= 0.02;
    else
        all->vertical_move = 10;
}

void jump_two(all_t *all)
{
    if (all->manage_jump == 1) {
        if (check_jump(all) == 0) {
            jump_norm(all);
        }
        else {
            all->manage_jump = -1;
            all->is_jumping = 0;
            all->object[2].number = 0;
            all->vertical_move = 0;
        }
    }
}

void jump(all_t *all)
{
    if (all->manage_jump == -1) {
        if (all->object[2].number < 1)
            all->object[2].number += 0.02;
        if (all->object[2].number > 1) {
            all->manage_jump = 1;
            all->object[2].number = 1;
        }
    }
    jump_two(all);
}

void jump_gestion(all_t *all)
{
    if (all->is_jumping == 1) {
        jump(all);
        all->object[2].position.y += all->vertical_move;
        all->vertical_move = (-3 * (pow(all->object[2].number, 2))
        + 5) * (all->manage_jump);
    }
}

void set_position(all_t *all)
{
    int i = 0;
    for (; i < all->nb_object; i++) {
        if (all->object[i].type
        == ENEMY || all->object[i].type == END)
            all->object[i].position.x -= 4;
        sfSprite_setPosition(all->object[i].sprite,
        all->object[i].position);
    }
}