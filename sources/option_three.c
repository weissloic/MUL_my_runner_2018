/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void option_one(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
{
    all->determine_map = 0;
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfSprite_setPosition(all->all_texture.fleche_menu_option,
    all->all_texture.pos_fleche);
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

void option_two_norm(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
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

void option_two(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
{
    all->all_texture.rect_mm2.top += 82.2;
    all->all_texture.pos_menu.y += 82.2;
    all->all_texture.pos_fleche.y += 100;
    all->all_texture.pos_fleche_invert.y += 100;
    all->determine_map = 1;
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfSprite_setPosition(all->all_texture.fleche_menu_option,
    all->all_texture.pos_fleche);
    option_two_norm(all, sprite_option, select_menu);
}

void option_three_norm(all_t *all, sfSprite *sprite_option,
sfSprite *select_menu)
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

void option_three(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
{
    all->all_texture.rect_mm2.top += 82.2 * 2;
    all->all_texture.pos_menu.y += 82.2 * 2;
    all->all_texture.pos_fleche.y += 100 * 2;
    all->all_texture.pos_fleche_invert.y += 100 * 2;
    all->determine_map = 2;
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfSprite_setPosition(all->all_texture.fleche_menu_option,
    all->all_texture.pos_fleche);
    option_three_norm(all, sprite_option, select_menu);
}