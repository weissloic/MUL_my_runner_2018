/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void option_four_norm(all_t *all,
sfSprite *sprite_option, sfSprite *select_menu)
{
    sfSprite_setPosition(all->all_texture.fleche_menu_option_invert,
    all->all_texture.pos_fleche_invert);
    sfRenderWindow_drawSprite(all->window.window, sprite_option,
    NULL);
    sfRenderWindow_drawSprite(all->window.window, select_menu,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.fleche_menu_option,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.fleche_menu_option_invert,
    NULL);
}

void option_four(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
{
    all->all_texture.rect_mm2.top += 82.2 * 3;
    all->all_texture.pos_menu.y += 82.2 * 3;
    all->all_texture.pos_fleche.y += 100 * 3;
    all->all_texture.pos_fleche_invert.y += 100 * 3;
    all->determine_map = 3;
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfSprite_setPosition(all->all_texture.fleche_menu_option,
    all->all_texture.pos_fleche);
    option_four_norm(all, sprite_option, select_menu);
}

void init_option_menu(all_t *all)
{
    all->all_texture.pos_carre.x = 900;
    all->all_texture.pos_carre.y = 250;
    all->all_texture.pos_menu.x = 900;
    all->all_texture.pos_menu.y = 250;

    all->all_texture.rect_mm1.width = 236.5;
    all->all_texture.rect_mm1.height = 411;
    all->all_texture.rect_mm1.top = 0;
    all->all_texture.rect_mm1.left = 236.5;

    all->all_texture.rect_mm2.width = 236.5;
    all->all_texture.rect_mm2.height = 82.2;
    all->all_texture.rect_mm2.top = 0;
    all->all_texture.rect_mm2.left = 0;
}

void event_option_two(all_t *all, sfSprite *sprite_option,
sfSprite *select_menu)
{
    if (all->mm_option == 4)
        option_four(all, sprite_option, select_menu);
}

