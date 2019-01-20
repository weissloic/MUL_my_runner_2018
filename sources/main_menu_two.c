/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/


#include "my.h"

void add_texture(all_t *all)
{
    sfSprite_setTexture(all->all_texture.test, all->all_texture.men, sfTrue);
    sfSprite_setTexture(all->all_texture.planet_fix,
    all->all_texture.planet, sfTrue);
    sfSprite_setTexture(all->all_texture.sprite_planet_fond,
    all->all_texture.planet_fond, sfTrue);
    sfSprite_setTexture(all->all_texture.sprite_earth_fond,
    all->all_texture.earth_fond, sfTrue);
    sfSprite_setTexture(all->all_texture.sprite_earth_fond,
    all->all_texture.earth_fond, sfTrue);
    sfSprite_setTexture(all->all_texture.sprite_text_astrorunner,
    all->all_texture.text_astrorunner, sfTrue);
    sfSprite_setTexture(all->all_texture.sprite_text_game,
    all->all_texture.text_game, sfTrue);
    sfSprite_setPosition(all->all_texture.planet_fix,
    all->all_texture.pos_planet);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.test,
    NULL);
}

void menu_adding(all_t *all)
{
    all->all_texture.test = sfSprite_create();
    all->all_texture.planet_fix = sfSprite_create();
    all->all_texture.sprite_perso_menu = sfSprite_create();
    all->all_texture.sprite_planet_fond = sfSprite_create();
    all->all_texture.sprite_earth_fond = sfSprite_create();
    all->all_texture.sprite_text_astrorunner = sfSprite_create();
    all->all_texture.sprite_text_game = sfSprite_create();
    all->all_texture.pos_planet.x = 0;
    all->all_texture.pos_planet.y = 500;
    menu_adding_two(all);
    game_engine_core_two(all);
    display_two(*all);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.sprite_perso_menu,
    NULL);
}

void init_menu(all_t *all)
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

void option_menu_one(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfRenderWindow_drawSprite(all->window.window, sprite_menu,
    NULL);
    sfRenderWindow_drawSprite(all->window.window, select_menu,
    NULL);
}

void option_menu_two(all_t *all, sfSprite *sprite_menu, sfSprite *select_menu)
{
    all->all_texture.rect_mm2.top += 82.2;
    all->all_texture.pos_menu.y += 82.2;
    sfSprite_setTexture(select_menu, all->all_texture.mm2, sfTrue);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    sfSprite_setPosition(select_menu, all->all_texture.pos_menu);
    sfRenderWindow_drawSprite(all->window.window, sprite_menu,
    NULL);
    sfRenderWindow_drawSprite(all->window.window, select_menu,
    NULL);
}