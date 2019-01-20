/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/


#include "my.h"

void option_menu_three(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
        all->all_texture.rect_mm2.top += 82.2 * 2;
        all->all_texture.pos_menu.y += 82.2 * 2;
        sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
        sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
        sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
        sfRenderWindow_drawSprite(all->window.window, sprite_menu,
        NULL);
        sfRenderWindow_drawSprite(all->window.window, select_menu,
        NULL);
}

void option_menu_four(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
        all->all_texture.rect_mm2.top += 82.2 * 3;
        all->all_texture.pos_menu.y += 82.2 * 3;

        sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
        sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
        sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
        sfRenderWindow_drawSprite(all->window.window, sprite_menu,
        NULL);
        sfRenderWindow_drawSprite(all->window.window, select_menu,
        NULL);
}

void option_menu_ttwo(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
    if (all->mm == 4)
        option_menu_four(all, sprite_menu, select_menu);
}

void option_menu(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
    if (all->mm == 1)
        option_menu_one(all, sprite_menu, select_menu);
    else if (all->mm == 2)
        option_menu_two(all, sprite_menu, select_menu);
    else if (all->mm == 3)
        option_menu_three(all, sprite_menu, select_menu);
    option_menu_ttwo(all, sprite_menu, select_menu);
}

void display_menu(all_t *all, sfSprite *sprite_menu)
{
    menu_adding(all);
    sfSprite *select_menu = sfSprite_create();
    all->all_texture.planet_fix = sfSprite_create();
    init_menu(all);
    sfSprite_setTextureRect(sprite_menu, all->all_texture.rect_mm1);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    option_menu(all, sprite_menu, select_menu);
    sfSprite_setPosition(sprite_menu, all->all_texture.pos_carre);
    sfSprite_setTexture(sprite_menu, all->all_texture.mm1, sfTrue);
    sfRenderWindow_display(all->window.window);
}